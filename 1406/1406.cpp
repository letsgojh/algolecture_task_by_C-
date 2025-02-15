#include <iostream>
#include <list>
#include <string>

std::list<char> L; 
std::string str,command;
int M,N;

//list의 back 메서드는 마지막 요소 가르키는게 아니라 
//마지막 다음요소 가르키므로 -1을 해준다.
int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> str;
	std::cin >> M;
	//입력받고 버퍼 비우지 않아 28번째 줄에서 getline이 되지 않는다.
	std::cin.ignore();

	for (int i = 0; i < str.length(); i++) //list에 문자 하나씩 넣기
		L.push_back(str[i]);


	std::list<char>::iterator t = L.end(); //끝에 포인터(커서)두기

	for (int i = 0; i < M; i++) {
		std::getline(std::cin, command);
		//이렇게 안하고 command charactor형으로 설정 하고, 
		//만약 명령어 P가 들어왔을때 넣는것도 charactor형으로 설정한다면
		//알아서 공백과 줄바꿈이 된다.

		if (command[0] == 'L') {
			if (t != L.begin()) {
				t--; //맨 앞일경우 예외 처리
			}
		}
		else if (command[0] == 'D'){

			if (t != L.end()) {
				t++; //맨 뒤일경우 예외 처리
			}
		}
		else if (command[0] == 'B') {
			if (t != L.begin())
				t = L.erase(--t);
			//erase는 t에 해당하는 원소 삭제
			// 왼쪽 원소 하나 삭제이므로 t--를 삭제하면된다.
		}
		else { 
			//만약 getline으로 P x를 입력했다면
			//command[0] = 'P'
			//command[1] = ' '
			//command[2] = "x"
			L.insert(t, command[2]);
		}

	}

	for (auto i : L)
		std::cout << i;

	return 0;
}
