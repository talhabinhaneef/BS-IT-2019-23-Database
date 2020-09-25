#include<iostream>
using namespace std;
int infoe(float ict[],float c[],float phy[],float eng[],float cal[],float cgp[],int a)
{       cout<<"         **1st Final Exam Result** "<<endl;
	    cout<<"ICT="<<ict[a]<<" GPA\n";cout<<"C++="<<c[a]<<" GPA\n";cout<<"PHY="<<phy[a]<<" GPA\n";
	    cout<<"ENG="<<eng[a]<<" GPA\n";cout<<"CAL="<<cal[a]<<" GPA\n";cout<<"CGPA="<<cgp[a]<<" GPA\n";
	    
	    
}
int infom(float ict[],float c[],float phy[],float eng[],float cal[],float cgp[],int a)
{	 cout<<"         **1st Final Exam Result** "<<endl;
	    cout<<"ICT="<<ict[a]<<" GPA\n";cout<<"C++="<<c[a]<<" GPA\n";cout<<"PHY="<<phy[a]<<" GPA\n";
	    cout<<"ENG="<<eng[a]<<" GPA\n";cout<<"CAL="<<cal[a]<<" GPA\n";cout<<"CGPA="<<cgp[a]<<" GPA\n";
	    
}
int main()
{
	int a,k;
	float ictm[65]={0,3.3,3.3,3.5,0,2.7,3,2,3.5,0,2.7,3.7,2,3,3.2,0,0,2,0,2.8,2.1,2.7,2.7,3.2,0,0,3.7,2.3,0,2.8,2.1,2,2,0,2,2.1,3.1,2.1,0,2,3,2.1,3,3.7,3.5,2.5,2.4,0,2.1,0,2.8,3.3,3.3,0,2.7,3,2,2.4,2.7,2.8,0,2,2.3,2.7,2};
    float icte[55]={0,3.3,2.7,3.1,3.4,2.5,3.1,2.7,4,3.2,4,0,3.3,2.7,2.7,2.8,2.1,2.3,2.3,2.5,3,2.5,3.3,2.4,3.8,2.3,3.3,2,2.4,3.5,3.3,2.4,2.5,0,2.1,2.8,2.3,2.7,2,2.1,2.5,3,2.3,2.2,3,2.4,2.7,2.3,2.9,2.9,0,3.3,2,2.8,2.5};

    float cm[65]={0,3.7,4,3.9,2.3,4,3.8,2.9,3.2,0,3.2,3.7,3.7,3.1,3.1,2.4,0,2.5,0,2.9,3.3,3.3,3.5,4,0,2.9,2.5,2.4,2.5,2.9,2.8,3.1,2.1,3.5,2.4,2.3,3.1,2.5,0,3.7,3.5,2.7,2.1,3.2,3.,2.3,4,3.1,2.1,2.7,2.6,3.9,2.9,0,3.7,2.8,2.8,3.3,2.3,3.4,2.3,3.3,3,0,0};
    float ce[55]={0,2.6,2.3,2.8,3.6,2.1,2.5,2.6,3.3,2.9,3,2.1,3.5,2.1,2.9,2.1,2.1,2.6,2.6,3.3,2.8,3.7,2.5,2.4,3,3.9,0,2.7,2.7,2.7,2.2,2.3,2.5,2.4,3.1,2.1,2.9,3.1,2.1,2.6,2.4,3.2,3.8,0,0,2.2,2.7,0,2.3,2.5,2.6,2.2};
    
    float phm[65]={0,4,4,4,2.3,3.9,3.7,3.7,4,3.5,3.6,4,3.4,3.8,4,2.7,0,3.7,0,2.5,4,3.3,3.4,4,0,3.5,3.5,2.5,2,3.9,3.2,3.2,2.4,3.5,4,2.5,2.8,2.6,2,3.6,3.3,2.9,3.4,3.3,2.8,2,3.7,3.9,2.7,2.6,3.8,3.8,3.7,2.7,4,3.3,2.4,4,3.9,3.7,2.4,3.4,3.9,3.3,2.7};
    float phe[55]={0,3.6,4,2.8,3.9,4,4,4,4,3.7,3.3,3.3,4,3.2,3.9,3.5,2.4,2.1,4,2.7,3.5,3.3,2.8,3.4,3.7,4,4,2,2.7,2.9,2.9,3.3,2.7,2,2.1,3.4,2.5,3.4,3.5,2.5,4,3.1,4,2.7,3.5,3.7,2,2.2,3,3,2,2.4,2.3,2.1,2.8};

	float calm[65]={0,3.3,3.7,2.9,2.1,4,3.3,2.3,3.5,0,2.3,3.9,0,3.1,4,2,0,2.7,0,2.1,3,3.2,4,2.1,0,2.8,2.7,2,2.1,0,3.4,3.5,2.5,2.4,3,0,2.5,2,2,3.3,2.5,2.1,3,3.7,3.1,2,3.1,3.3,22.7,2.1,2,2.8,3,2.1,3.2,3.2,2.7,0,3,3,0,2.1};
	float cale[55]={0,3.3,2.9,2.2,3.1,2.7,2.3,3.5,3.4,2,2.7,0,3.5,2.7,3.1,2.8,0,2,3.7,2,2.4,2.3,2,3.9,2.7,2.1,3.3,0,2.7,2.1,2.9,2.1,2.1,2,2,2.5,2.3,2,2.,2.1,3.7,2,2.4,2.1,2.3,2,2.1,2,2.7,2.4,0,2.3,2,0,2.8};
    
	float  engm[65]={0,3.7,3.8,3.7,0,3.1,3,2.2,3.7,2.2,3.3,3.7,3,3.7,3.7,3.1,0,3.1,0,3.3,3.4,3.5,3.3,3.7,2,2.3,3.8,3.1,2.3,3.2,3.4,3.3,3,3.3,2.8,3.4,3.3,2.8,2.7,2.5,3.3,2.7,3.7,4,3.1,3,3.7,3.4,3.4,3,3.4,3.7,3.3,2.3,3.3,3.5,3.8,3.7,3.3,3.3,3,2.5,3.7,3.7,2.7};
	float  enge[55]={0,3.5,3.3,3.2,3.7,2,3.5,3.3,4,3.4,3.7,3.5,3.8,3.5,2.7,3.2,3.1,2.8,3.7,3,3.3,3.4,4,3.6,3.2,3.2,2.9,3,3.1,3.8,3.2,3.6,3.6,3.2,2.8,2.8,3.6,2.7,3.5,3.7,4,3.1,2.9,3.3,3.2,2.4,3.4,3.2,3.3,3.3,0,3.2,2.4,3.1,3.1};
	
	float cgpm[65]={0,3.61,3.78,3.62,1.40,3.57,3.39,2.64,3.56,1.07,3.03,3.79,2.50,3.33,3.57,2.06,0.00,2.78,0.00,2.73,3.17,3.21,3.39,3.44,0.38,2.34,3.19,2.46,1.83,2.58,2.97,3.03,2.38,2.60,2.81,2.08,2.97,2.41,1.26,3.06,3.14,2.51,2.98,3.56,3.09,2.36,3.42,2.76,2.44,2.23,2.92,3.38,3.05,1.31,3.33,3.10,2.63,3.32,3.03,3.19,1.59,2.87,3.17,1.82,1.78};
    float cgpe[55]={0,3.22,2.99,2.82,3.54,2.63,3.04,3.18,3.71,3.03,3.32,1.80,3.61,2.79,3.05,2.83,1.95,2.38,3.22,2.74,2.99,3.08,2.89,3.09,3.26,2.75,3.51,1.31,2.72,2.98,2.98,2.69,2.62,1.98,2.29,2.93,2.53,2.75,2.97,2.48,3.31,2.70,2.73,2.53,3.05,2.92,1.91,1.82,2.78,2.85,0.38,1.68,2.26,2.15,2.65,};

	char ch;
	cout<<"\t \t \t \t \t ________________________________ "<<endl;
	cout<<"\t \t \t \t \t Student Information System (SIS)"<<endl;
	cout<<"\t \t \t \t \t ''''''''''''''''''''''''''''''''"<<endl;
	cout<<"\t \t \t \t \t Enter Roll Number:";
	cin>>a;
	cout<<"\t \t \t \t \t Enter Shift: M/E? ";
	cin>>ch;
	if(a==1 &&  ch=='m')
	{
		cout<<" Abu Bakar Siddique "<<endl;
		cout<<" BSITLD-19-0"<<a<<endl;
		cout<<" 932/1100 "<<endl;
		infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==2 && ch=='m')
	{
		cout<<" Irsa Mukhtar "<<endl;
		cout<<" BSITLD-19-0"<<a<<endl;
		cout<<" 924/1100 "<<endl;
     	infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==3 && ch=='m')
	{
		cout<<" Nazia Sadiq "<<endl;
        cout<<" BSITLD-19-0"<<a<<endl;
		cout<<" 906/1100 "<<endl;
		infom(ictm,cm,phm,engm,calm,cgpm,a);
	    }
	else if(a==4 && ch=='m')
	{
		cout<<" Muhammad Mehtab "<<endl;
		cout<<" BSITLD-19-0"<<a<<endl;
		cout<<" 2869/3550 "<<endl;cout<<" 889 "<<endl;
		infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==5 && ch=='m')
	{
		cout<<" Usman Ehsan "<<endl;
		cout<<" BSITLD-19-0"<<a<<endl;
		cout<<" 2529/3150 "<<endl;cout<<" 883 "<<endl;
		infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==6 && ch=='m')
	{
		cout<<" Shehbaz Gull "<<endl;
		cout<<" BSITLD-19-0"<<a<<endl;
		cout<<" 2513/3150 "<<endl;cout<<" 878 "<<endl;
		infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==7 && ch=='m')
	{
		cout<<" Muhammad Sardar "<<endl;
		cout<<" BSITLD-19-0"<<a<<endl;
		cout<<" 2814/3550 "<<endl;
		infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==8 && ch=='m')
	{
		cout<<" Zargham Abbas "<<endl;
		cout<<" BSITLD-19-0"<<a<<endl;
		cout<<" 850/1100 "<<endl;
		infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==9 && ch=='m')
	{
		cout<<" Muhammad Usman  "<<endl;
		cout<<" BSITLD-19-0"<<a<<endl;
		cout<<"  926/1200 "<<endl;cout<<" 849 "<<endl;
		infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==10 && ch=='m')
	{
		cout<<" Muhammad Shoaib "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 844/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==11 && ch=='m')
	{
		cout<<" Taimor Fiaz "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 831/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==12 && ch=='m')
	{
		cout<<" Muhammad Mohsin "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 808+20/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==13 && ch=='m')
	{
		cout<<" Manahil Naseem "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 825/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==14 && ch=='m')
	{
		cout<<" Esha Ishfaq "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 819/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==15 && ch=='m')
	{
		cout<<" Muhammad Yasin "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 2624/3550 "<<endl;cout<<" 813 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==16 && ch=='m')
	{
		cout<<" Hafiz Muhammad Asad Mahmood "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 786+20/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==17 && ch=='m')
	{
		cout<<" Muhammad Hamza Ali "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 2590/3550 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==18 && ch=='m')
	{
		cout<<" Ghulam Murtaza "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 799/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==19 && ch=='m')
	{
		cout<<" Muhammad Arif "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 795/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==20 && ch=='m')
	{
		cout<<" Muhammad Ejaz "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 793/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==21 && ch=='m')
	{
		cout<<" Muhammad Ahmad "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 792/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==22 && ch=='m')
	{
		cout<<" Muhammad Naeem "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 2238/3200 "<<endl;cout<<" 769+20=789 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==23 && ch=='m')
	{
		cout<<" Muhammad Zubair "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 782/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==24 && ch=='m')
	{
		cout<<" Raees Azam "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 2524/3550 "<<endl;cout<<" 782 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==25 && ch=='m')
	{
		cout<<" Sajeel Abbas "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 2520/3550 "<<endl;cout<<" 781 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==26 && ch=='m')
	{
		cout<<" Esha Ismail "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 778/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==27 && ch=='m')
	{
		cout<<" Syed Fahad Ali Bukhari "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 2263/3200 "<<endl;cout<<" 778 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==28 && ch=='m')
	{
		cout<<" Nadia Sattar "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 774/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==29 && ch=='m')
	{
		cout<<" Muhammad Arshad "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 767/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==30 && ch=='m')
	{
		cout<<" Muhammad Saqib "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 764/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==31 && ch=='m')
	{
		cout<<" Qaswar Ahmad "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 759/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==32 && ch=='m')
	{
		cout<<" Baqir Jalal "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 756/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==33 && ch=='m')
	{
		cout<<" Muhammad Jahanzaib "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 754/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==34 && ch=='m')
	{
		cout<<" Abubakkar Saddique "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 751/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==35 && ch=='m')
	{
		cout<<" Waheed Ahmad "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 748/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==36 && ch=='m')
	{
		cout<<" Muhammad Aon Balouch "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 745/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==37 && ch=='m')
	{
		cout<<" Muhammad Nadeem Aslam  "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 740/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==38 && ch=='m')
	{
		cout<<" Muhammad Amjad "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 733/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==39 && ch=='m')
	{
		cout<<" Muhammad Asghar "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 732/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==40 && ch=='m')
	{
		cout<<" Rashid Ali "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 731/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==41 && ch=='m')
	{
		cout<<" Ali Waqas "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" /1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==42 && ch=='m')
	{
		cout<<" Muhammad Rizwan "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 731/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==43 && ch=='m')
	{
		cout<<" Sidra Fatima "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 730/1100 "<<endl;
		infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==44 && ch=='m')
	{
		cout<<" Muhammad Raees "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 730/1100 "<<endl;
		infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==45 && ch=='m')
	{
		cout<<" Muhammad Fiaz "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 724/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==46 && ch=='m')
	{
		cout<<" Saima Abbas "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 721/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==47 && ch=='m')
	{
		cout<<" Muhammad Waqar "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 721/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==48 && ch=='m')
	{
		cout<<" Muzammal Shahzad "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 720/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==49 && ch=='m')
	{
		cout<<" Muhammad Shoukat "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 720/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==50 && ch=='m')
	{
		cout<<" Muhammad Sarfraz "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 717/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==51 && ch=='m')
	{
		cout<<" Muhammad Junaid "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 714/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==52 && ch=='m')
	{
		cout<<" Muhammad Sami "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 714/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==53 && ch=='m')
	{
		cout<<" Muhammad Sohaib Rasheed "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 2040/3150 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==54 && ch=='m')
	{
		cout<<" Sahib Yar "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 712/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==55 && ch=='m')
	{
		cout<<" Muhammad Jahangir Shaheen "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 711/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==56 && ch=='m')
	{
		cout<<" Atiq Ur Rehman "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 710/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==57 && ch=='m')
	{
		cout<<" Sawera Kiran "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 708/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==58 && ch=='m')
	{
		cout<<" Ali Hasnain "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 688/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==59 && ch=='m')
	{
		cout<<" Muhammad Saqlain "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 708/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==60 && ch=='m')
	{
		cout<<" Muneeb Bilal "<<endl;
		cout<<" BSITLD-19-"<<a<<endl;
		cout<<" 707/1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==61 && ch=='m')
	{
		cout<<" CR. Adnan Arif "<<endl;
		cout<<" BSITLD-18-32"<<endl;
		cout<<" /1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==62 && ch=='m')
	{
		cout<<" Waleed Aslam "<<endl;
		cout<<" BSITLD-18-38 "<<endl;
		cout<<" /1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==63 && ch=='m')
	{
		cout<<" M. Zain ul Abdin "<<endl;
		cout<<" BSITLD-18-61"<<endl;
		cout<<" /1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==64 && ch=='m')
	{
		cout<<" M. Hassan "<<endl;
		cout<<" BSITLD-17-56 "<<endl;
		cout<<" /1100 "<<endl;infom(ictm,cm,phm,engm,calm,cgpm,a);
	}
	else if(a==1 && ch=='e')
	{
		cout<<" Muhammad Raheel "<<endl;
		cout<<" BSITELD-19-0"<<a<<endl;
		cout<<" 703/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==2 && ch=='e')
	{
		cout<<" Saleh Hayat "<<endl;
		cout<<" BSITELD-19-0"<<a<<endl;
		cout<<" 707/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==3 && ch=='e')
	{
		cout<<" Muhammad Arslan Aslam "<<endl;
		cout<<" BSITELD-19-0"<<a<<endl;
		cout<<" /1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==4 && ch=='e')
	{
		cout<<" Muhammad Adnan "<<endl;
		cout<<" BSITELD-19-0"<<a<<endl;
		cout<<" 703/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);}
	else if(a==5 && ch=='e')
	{
		cout<<" Muhammad Ehsan "<<endl;
		cout<<" BSITELD-19-0"<<a<<endl;
		cout<<" 698/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==6 && ch=='e')
	{
		cout<<" Muhammad Faraz "<<endl;
		cout<<" BSITELD-19-0"<<a<<endl;
		cout<<" 695/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==7 && ch=='e')
	{
		cout<<" Muhammad Atif "<<endl;
		cout<<" BSITELD-19-0"<<a<<endl;
		cout<<" 693/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==8 && ch=='e')
	{
		cout<<" Hanzala Naseem "<<endl;
		cout<<" BSITELD-19-0"<<a<<endl;
		cout<<" 691/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==9 && ch=='e')
	{
		cout<<" Mohammad Shaheen "<<endl;
		cout<<" BSITELD-19-0"<<a<<endl;
		cout<<" 689/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==10 && ch=='e')
	{
		cout<<endl;
		cout<<" Amir Hussain "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 688/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==11 && ch=='e')
	{
		cout<<" Yousaf Tahir "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 688/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==12 && ch=='e')
	{
		cout<<" Muhammad Mursaleen "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 682/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==13 && ch=='e')
	{
		cout<<" Hamza Ashraf "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 681/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==14 && ch=='e')
	{
		cout<<" Muhammad Ikram "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 678/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==15 && ch=='e')
	{
		cout<<" Javed Iqbal "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 676/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==16 && ch=='e')
	{
		cout<<" Muhammad Ansar "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 674/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==17 && ch=='e')
	{
		cout<<" Muhammad Muzamil Hameed "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 670/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
		else if(a==18 && ch=='e')
	{
		cout<<" Syed Muhammad Asim "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 669/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==19 && ch=='e')
	{
		cout<<" Mohammad Talha Bin Haneef "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 669/1100 "<<endl;
		infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==20 && ch=='e')
	{
		cout<<" Muhammad Sufyan "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 663/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==21 && ch=='e')
	{
		cout<<" Hanzla Sadaqat "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 661/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==22 && ch=='e')
	{
		cout<<" Aisha Gul "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 656/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==23 && ch=='e')
	{
		cout<<" Fatima "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 634+20=1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==24 && ch=='e')
	{
		cout<<" Muhammad Ramzan "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 654/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==25 && ch=='e')
	{
		cout<<" Sonia Shamshad "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 654/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==26 && ch=='e')
	{
		cout<<" Mohammad Umair "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 648/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==27 && ch=='e')
	{
		cout<<" Muhammad Kashif "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 646/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==28 && ch=='e')
	{
		cout<<" Ayaz Mahmood "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 641/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==29 && ch=='e')
	{
		cout<<" Saad Saeed "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 640/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==30 && ch=='e')
	{
		cout<<" Aumber Maria "<<endl;
		cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 637/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==31 && ch=='e')
	{
		cout<<" Muhammad Ahmad "<<endl;cout<<" BSITELD-19-"<<a<<endl;
		cout<<" 636/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==32 && ch=='e')
	{
		cout<<" Faizan Jameel "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 633/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==33 && ch=='e')
	{
		cout<<" Bismillah Khan "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 633/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==34 && ch=='e')
	{
		cout<<" Naeem Ullah "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 628/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==35 && ch=='e')
	{
		cout<<" Ayesha Akram "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 628/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==36 && ch=='e')
	{
		cout<<" Arslan Tajammul "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 628/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==37 && ch=='e')
	{
		cout<<" Aqeel Ur Rehman "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 628/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==38 && ch=='e')
	{
		cout<<" Shahbaz Hussain Shah "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 618/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==39 && ch=='e')
	{
		cout<<" Abuzar Ghaffari "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 613/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==40 && ch=='e')
	{
		cout<<" Muhammad Kamran "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 612/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==41 && ch=='e')
	{
		cout<<" Gul Shair Hussain "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 603/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==42 && ch=='e')
	{
		cout<<" Muhammad Asif "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 596/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==43 && ch=='e')
	{
		cout<<" Hammad Nasir "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 596/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==44 && ch=='e')
	{
		cout<<" Aswad Raza "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 592/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==45 && ch=='e')
	{
		cout<<" Mudasar Naeem "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 592/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==46 && ch=='e')
	{
		cout<<" Faiz Rasool "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 591/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==47 && ch=='e')
	{
		cout<<" Umar Hassan Mehmaad "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 590/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==48 && ch=='e')
	{
		cout<<" Syed Umer Shah "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 588/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==49 && ch=='e')
	{
		cout<<" Azan Abid "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 583/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==50 && ch=='e')
	{
		cout<<" Muhammad Hassan Nadeem "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 559/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==51 && ch=='e')
	{
		cout<<" Haseeb Tariq "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" /1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
	else if(a==52 && ch=='e')
	{
		cout<<" Mohsin Baseer "<<endl;cout<<" BSITELD-19-"<<a<<endl;cout<<" 570/1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
		else if(a==53 && ch=='e')
	{
		cout<<" Maqbool Ahmad "<<endl;cout<<" BSITELD-18-20"<<endl;cout<<" /1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
		else if(a==54 && ch=='e')
	{
		cout<<" Khizar Iqbal "<<endl;cout<<" BSITELD-18-26"<<endl;cout<<" /1100 "<<endl;infoe(icte,ce,phe,enge,cale,cgpe,a);
	}
    else
	 {
	 	cout<<" Invalid Roll Number! "<<endl;
	 }
    cout<<"Program written by Mohammad Talha"<<endl;
cin>>k;
	
}
