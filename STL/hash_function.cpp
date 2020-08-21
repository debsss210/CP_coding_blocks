#include <bits/stdc++.h>
using namespace std;

class Student {
public:

	string firstname;
	string lastname;
	string rollno;

	Student(string f, string l, string no) {
		firstname = f;
		lastname = l;
		rollno = no;
	}

	bool operator==(const Student &s) const {
		return rollno == s.rollno ? true : false;
	}
};

class HashFn {
public:
	// size_t -> unsigned int(size of memory in bytes)
	size_t operator()(const Student &s) const {
		return s.firstname.length() + s.lastname.length();
	}
};

int main() {
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input.txt", "r", stdin);
	// for writing output from output.txt
	freopen("output.txt", "w", stdout);
#endif

	unordered_map<Student, int, HashFn> student_map;

	Student s1("Prateek", "Narang", "010");
	Student s2("Rahul", "Kumar", "023");
	Student s3("Prateek", "Narang", "038");
	Student s4("Rahul", "Kumar", "120");

	// Add student- marks to Hasmap
	student_map[s1] = 100;
	student_map[s2] = 180;
	student_map[s3] = 47;
	student_map[s4] = 11;

	cout << student_map[s1] << endl;

	// iterate over all students
	for (auto s : student_map) {
		cout << s.first.firstname << " " <<
		     s.first.rollno << endl << "Marks : "
		     << s.second << endl;
	}

	return 0;

}