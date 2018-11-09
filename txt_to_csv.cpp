#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("hard-rock-cafe-park-street-area","r",stdin);
	freopen("out.csv","w",stdout);
	cout<<"business_id,review_id,stars,text,user_id"<<endl;
	string str,id,bid,rid,rating,comment,uid;
	bid = "10001";
	while(get_line(cin,str) != 0)
	{
		get_line(cin,rid);
		get_line(cin,str);
		get_line(cin,uid);
		get_line(cin,rating);
		while(get_line(cin,str))		
		{
			if(str.substr(0,2) == "##")
			{
				get_line(cin,str);
				break;
			}
			text += str;
		}
		cout<<bid<<","<<rid<<","<<rating<<","<<text<<","<<uid<<endl;
	}
}	
		
		
