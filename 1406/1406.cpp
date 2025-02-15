#include <iostream>
#include <list>
#include <string>

std::list<char> L; 
std::string str,command;
int M,N;

//list�� back �޼���� ������ ��� ����Ű�°� �ƴ϶� 
//������ ������� ����Ű�Ƿ� -1�� ���ش�.
int main(void) {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::cin >> str;
	std::cin >> M;
	//�Է¹ް� ���� ����� �ʾ� 28��° �ٿ��� getline�� ���� �ʴ´�.
	std::cin.ignore();

	for (int i = 0; i < str.length(); i++) //list�� ���� �ϳ��� �ֱ�
		L.push_back(str[i]);


	std::list<char>::iterator t = L.end(); //���� ������(Ŀ��)�α�

	for (int i = 0; i < M; i++) {
		std::getline(std::cin, command);
		//�̷��� ���ϰ� command charactor������ ���� �ϰ�, 
		//���� ��ɾ� P�� �������� �ִ°͵� charactor������ �����Ѵٸ�
		//�˾Ƽ� ����� �ٹٲ��� �ȴ�.

		if (command[0] == 'L') {
			if (t != L.begin()) {
				t--; //�� ���ϰ�� ���� ó��
			}
		}
		else if (command[0] == 'D'){

			if (t != L.end()) {
				t++; //�� ���ϰ�� ���� ó��
			}
		}
		else if (command[0] == 'B') {
			if (t != L.begin())
				t = L.erase(--t);
			//erase�� t�� �ش��ϴ� ���� ����
			// ���� ���� �ϳ� �����̹Ƿ� t--�� �����ϸ�ȴ�.
		}
		else { 
			//���� getline���� P x�� �Է��ߴٸ�
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
