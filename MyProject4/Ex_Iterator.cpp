//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct conf {
//	char itemname[40];
//	char itemcontent[100];
//};
//
//char* getinfo(vector<conf*>& conflist1, const char* pitem) {
//	for (auto pos = conflist1.begin(); pos != conflist1.end(); ++pos) {
//		if (_stricmp((*pos)->itemname, pitem) == 0) {
//			return (*pos)->itemcontent;
//		}
//	}
//	return nullptr;
//}
//int main() {
//	conf* p_conf1 = new conf;
//	strcpy_s(p_conf1->itemname, sizeof(p_conf1->itemname), "ServerName");
//	strcpy_s(p_conf1->itemcontent, sizeof(p_conf1->itemcontent), "1Çø");
//
//	conf* p_conf2 = new conf;
//	strcpy_s(p_conf2->itemname, sizeof(p_conf2->itemname), "ServerID");
//	strcpy_s(p_conf2->itemcontent, sizeof(p_conf2->itemcontent), "100000");
//
//	vector<conf*> conflist;
//	conflist.push_back(p_conf1);
//	conflist.push_back(p_conf2);
//
//	char* p_tmp = getinfo(conflist, "ServerName");
//	if (p_tmp != nullptr) {
//		cout << p_tmp << endl;
//	}
//	vector<conf*>::iterator pos;
//	for (pos = conflist.begin(); pos != conflist.end(); ++pos) {
//		delete(*pos);
//	}
//	conflist.clear();
//	return 0;
//}