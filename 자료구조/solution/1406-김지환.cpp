// acmicpc.net/problem/1406
// ������ 
// author : kimjihwan
// 2023-05-22 AM 04:00

#include <iostream>
#include <string> 
#include <list>

using namespace std;

list<char> editor;
list<char>::iterator cussor;
string s;
int n;

void input() {
	cin >> s >> n;
	for(int i = 0; i<s.size(); i++) {
		editor.push_back(s[i]);
	}
	cussor = editor.end();
}

void solve(char c) {
	if(c=='P') {
		cin >> c;
		editor.insert(cussor,c);
	}
	else if(c=='L') {
		if(editor.begin() != cussor) cussor--;
	}
	else if(c=='D') {
		if(editor.end() != cussor) cussor++;
	}
	else {
		if(cussor == editor.begin()) return;
		cussor = editor.erase(--cussor);
	}
	
	/* Debugging
	for(list<char>::iterator it = editor.begin(); it!=editor.end(); it++) {
		cout << *it << "->";
	}
	cout <<"\n";
	*/
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	while(n--) {
		char c;
		cin >> c;
		solve(c);	
	}
	for(cussor = editor.begin(); cussor!=editor.end(); cussor++) {
		cout << *cussor;
	}
	
	return 0;
}
// 2023-05-21 AM 04:12

/*
begin == ������ �� �� iter, �� ���� NULL Ptr������ ������ 
end == NullPtr
insert == iter�� ���� ���� ���� �� iter �� ����
erase == �ش� iter�� ������ ���� iter ��ȯ,
    	 iter�� end�� ��� ���� iter�� begin�̹Ƿ� ���ѷ���
push_back, push_front�� ����. 
*/
