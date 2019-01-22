#include<fstream.h>
#include<process.h>
#include<conio.h>
int i=0,ch,p1[33],p2[33],p3[33],p4[33],p5[33],p6[33],temp,f1=-1;
void head();
void choice();
void main()
{
	clrscr();
	int k,m,last=2;
	char pass;
	ofstream fout("C:\\Voting.txt",ios::app);
	b:
	clrscr();
	head();
	cout<<"\n\n\t\tMain Menu :-\n\t\t1).Start Voting\n\t\t2).Exit\n\n\t\tEnter your choice : ";
	cin>>m;
	if(m==1)
	{
		cout<<"\n\t\tEnter password :- ";
		cin>>pass;
		if(pass=='Ý')
		{
			goto c;
		}
		else
		{
			goto b;
		}
	}
	else if(m==2)
	{
		cout<<"\n\t\tEnter password :- ";
		cin>>pass;
		if(pass=='Ý')
		{
			last=1;
			goto d;
			e:
			exit(0);
		}
		else
		{
			goto b;
		}
	}
	else
	{
		goto b;
	}
	c:
	clrscr();
	++f1;
	if(f1>=1)
	{
		i=0;
	}
	head();
	cout<<"\n\nI). President:-\n\n1).Ayush Agarwal\n2).Tanaya Sharma\n3).Mahi Tambi\n4).Manas Sharma\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nII). Prime Minister:-\n\n1).Yashvardhan Tolani\n2).Sudhir Patnayak\n3).Taresh Agarwal\n4).Shruti Solanki\n5).Payal Meena\n6).Shubham Raj\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nIII). Speaker:-\n\n1).Vedant Rathore\n2).Anmol Bhatt\n3).Rachita Sharma\n4).Nandini Pandey\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nIV). Education Minister:-\n\n1).Shubham Agarwal\n2).Gaurav Chhabra\n3).Ammara Aqweel\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nV). Home Minister:-\n\n1).Manik Rana\n2).Mansi Shekhawat\n3).Tanya Lila\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nVI). Sports Minister:-\n\n1).Aakash Thakur\n2).Apoorv Chawla\n3).Vishal Sharma\n4).Harsh Sharma\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nVII). Environment Minister:-\n\n1).Kudrat Setia\n2).Unnati Sahay\n3).Nadiya Khan\n4).Tanvi\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nVIII). Foreign Minister:-\n\n1).Shayandeep Das\n2).Rishabh Yadav\n3).Aman Baid\n4).Nidhi Mathur\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nIX). IB Minister:-\n\n1).Khushagra Taunk\n2).Diksha Khudia\n3).Arushi Bajpai\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nX). IT Minister:-\n\n1).Yash Bafna\n2).Abhinav Sharma\n3).Vani Bhardwaj\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXI). Transport Minister:-\n\n1).Vishal Bidwatka\n2).Ishan Sharma\n3).Aditya Ambawani\n4).Abhinav Khandelwal\n5).Christina A.Sam\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXII). Cultural Minister:-\n\n1).Arohi Dixit\n2).Akshita Ludhania\n3).Titiksha\n4).Maulshri Bahukhandi\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXIII). Food And Health Minister:-\n\n1).Jaya Mishra\n2).Sonali Kedia\n3).Mohit Mathur\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXIV). Finance Minister:-\n\n1).Kaushal Soni\n2).Vikash Chaudhary\n3).Gaurav Sharma\n4).Utkarsh Kunwar\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXV). Hope House Captain:-\n\n1).Dimple Kushalya\n2).Pragya Tailor\n3).Siddharth Karnani\n4).Deval Garg\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXVI). Unity House Captain:-\n\n1).Shrishti Dhingra\n2).Ritwik Yadav\n3).Hitendra Pratap Singh\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXVII). Faith House Captain:-\n\n1).Muskan Jain\n2).Shikhar Mathur\n3).Akshay Soni\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXVIII). Truth House Captain:-\n\n1).Karan Agarwal\n2).Vishwas Khandelwal\n3).Ankit Tanwar\n4).Akshay Pareek\n5).Bhoomika Davera\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXIX). Deputy Education Minister:-\n\n1).Eesha Singh\n2).Sumit Agarwal\n3).Ayush Goyal\n4).Rishita\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXX). Deputy Home Minister:-\n\n1).Pranav Bhaskar\n2).Gaurav Mohindroo\n3).Nandini Maheshwari\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXI). Deputy Sports Minister:-\n\n1).Kushang Vijay\n2).Aditya Singh Bhoj\n3).Bitthal Yadav\n4).Tanishk Jain\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXII). Deputy Environment Minister:-\n\n1).Preeti Chaudhary\n2).Dhruv Jain\n3).Yash Meena\n4).Priyanka Survi\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXIII). Deputy Foreign Minister:-\n\n1).Raghav Bharadwaj\n2).Shruti Sarda\n3).Bhoomi Chauhan\n4).Arnav Sharma\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXIV). Deputy I.B. Minister:-\n\n1).Palak Agarwal\n2).Mohit Rajpurohit\n3).Anushka Soni\n4).Akhil Garg\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXV). Deputy I.T. Minister:-\n\n1).Taranpreet Khurana\n2).Ayush Jain\n3).Shruti Singh\n4).Pooja Fauzdar\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXVI). Deputy Transport Minister:-\n\n1).Ishika Solanki\n2).Jyoti Kunwar\n3).Kartik Safaya\n4).Divyansh Rathore\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXVII). Deputy Cultural Minister:-\n\n1).Anisha Das\n2).Priya Sneh\n3).Nandita Sogarwal\n4).Garima Jain\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXVIII). Deputy Food And Health Minister:-\n\n1).Devesh Mahaur\n2).Neha Singh\n3).Aditya Sharma\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXIX). Deputy Finance Minister:-\n\n1).Yash Jain\n2).Parikshit Sevak\n3).Aashi Agarwal\n4).Manav Sewani\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXX). Vice Hope House Captain :-\n\n1).Somya Jain\n2).Anirudh Singh\n3).Aryan Malik\n4).Priyanshi Nama\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXXI). Vice Unity House Captain :-\n\n1).Saransh\n2).Shikhar Audichy\n3).Ananya Soni\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXXII). Vice Faith House Captain :-\n\n1).Sonia Chabbra\n2).Raghavendra Awasthi\n3).Shobhit Yadav\n4).Depika Parmar\n5).Vishal Mathur\n\nChoice : ";
	choice();
	clrscr();
	head();
	cout<<"\n\nXXXIII). Vice Truth House Captain :-\n\n1).Aditya Bhalla\n2).Paridhi Agarwal\n3).Abhinav Dadich\n4).Abhimanyu Pareek\n\nChoice : ";
	choice();
	if(last==1)
	{
		d:
		fout<<"\n\nI). President:-\n\n1).Ayush Agarwal = "<<p1[0]<<"\n2).Tanaya Sharma = "<<p2[0]<<"\n3).Mahi Tambi = "<<p3[0]<<"\n4).Manas Sharma = "<<p4[0];
		fout<<"\n\nII). Prime Minister:-\n\n1).Yashvardhan Tolani = "<<p1[1]<<"\n2).Sudhir Patnayak = "<<p2[1]<<"\n3).Taresh Agarwal = "<<p3[1]<<"\n4).Shruti Solanki = "<<p4[1]<<"\n5).Payal Meena = "<<p5[1]<<"\n6).Shubham Raj = "<<p6[1];
		fout<<"\n\nIII). Speaker:-\n\n1).Vedant Rathore = "<<p1[2]<<"\n2).Anmol Bhatt = "<<p2[2]<<"\n3).Rachita Sharma = "<<p3[2]<<"\n4).Nandini Pandey = "<<p4[2];
		fout<<"\n\nIV). Education Minister:-\n\n1).Shubham Agarwal = "<<p1[3]<<"\n2).Gaurav Chhabra = "<<p2[3]<<"\n3).Ammara Aqweel = "<<p3[3];
		fout<<"\n\nV). Home Minister:-\n\n1).Manik Rana = "<<p1[4]<<"\n2).Mansi Shekhawat = "<<p2[4]<<"\n3).Tanya Lila = "<<p3[4];
		fout<<"\n\nVI). Sports Minister:-\n\n1).Aakash Thakur = "<<p1[5]<<"\n2).Apoorv Chawla = "<<p2[5]<<"\n3).Vishal Sharma = "<<p3[5]<<"\n4).Harsh Sharma = "<<p4[5];
		fout<<"\n\nVII). Environment Minister:-\n\n1).Kudrat Setia = "<<p1[6]<<"\n2).Unnati Sahay = "<<p2[6]<<"\n3).Nadiya Khan = "<<p3[6]<<"\n4).Tanvi = "<<p4[6];
		fout<<"\n\nVIII). Foreign Minister:-\n\n1).Shayandeep Das = "<<p1[7]<<"\n2).Rishabh Yadav = "<<p2[7]<<"\n3).Aman Baid = "<<p3[7]<<"\n4).Nidhi Mathur = "<<p4[7];
		fout<<"\n\nIX). IB Minister:-\n\n1).Khushagra Taunk = "<<p1[8]<<"\n2).Diksha Khudia = "<<p2[8]<<"\n3).Arushi Bajpai = "<<p3[8];
		fout<<"\n\nX). IT Minister:-\n\n1).Yash Bafna = "<<p1[9]<<"\n2).Abhinav Sharma = "<<p2[9]<<"\n3).Vani Bhardwaj = "<<p3[9];
		fout<<"\n\nXI). Transport Minister:-\n\n1).Vishal Bidwatka = "<<p1[10]<<"\n2).Ishan Sharma = "<<p2[10]<<"\n3).Aditya Ambawani = "<<p3[10]<<"\n4).Abhinav Khandelwal = "<<p4[10]<<"\n5).Christina A.Sam = "<<p5[10];
		fout<<"\n\nXII). Cultural Minister:-\n\n1).Arohi Dixit = "<<p1[11]<<"\n2).Akshita Ludhania = "<<p2[11]<<"\n3).Titiksha = "<<p3[11]<<"\n4).Maulshri Bahukhandi = "<<p4[11];
		fout<<"\n\nXIII). Food And Health Minister:-\n\n1).Jaya Mishra = "<<p1[12]<<"\n2).Sonali Kedia = "<<p2[12]<<"\n3).Mohit Mathur = "<<p3[12];
		fout<<"\n\nXIV). Finance Minister:-\n\n1).Kaushal Soni = "<<p1[13]<<"\n2).Vikash Chaudhary = "<<p2[13]<<"\n3).Gaurav Sharma = "<<p3[13]<<"\n4).Utkarsh Kunwar = "<<p4[13];
		fout<<"\n\nXV). Hope House Captain:-\n\n1).Dimple Kushalya = "<<p1[14]<<"\n2).Pragya Tailor = "<<p2[14]<<"\n3).Siddharth Karnani = "<<p3[14]<<"\n4).Deval Garg = "<<p4[14];
		fout<<"\n\nXVI). Unity House Captain:-\n\n1).Shrishti Dhingra = "<<p1[15]<<"\n2).Ritwik Yadav = "<<p2[15]<<"\n3).Hitendra Pratap Singh = "<<p3[15];
		fout<<"\n\nXVII). Faith House Captain:-\n\n1).Muskan Jain = "<<p1[16]<<"\n2).Shikhar Mathur = "<<p2[16]<<"\n3).Akshay Soni = "<<p3[16];
		fout<<"\n\nXVIII). Truth House Captain:-\n\n1).Karan Agarwal = "<<p1[17]<<"\n2).Vishwas Khandelwal = "<<p2[17]<<"\n3).Ankit Tanwar = "<<p3[17]<<"\n4).Akshay Pareek = "<<p4[17]<<"\n5).Bhoomika Davera = "<<p5[17];
		fout<<"\n\nXIX). Deputy Education Minister:-\n\n1).Eesha Singh = "<<p1[18]<<"\n2).Sumit Agarwal = "<<p2[18]<<"\n3).Ayush Goyal = "<<p3[18]<<"\n4).Rishita = "<<p4[18];
		fout<<"\n\nXX). Deputy Home Minister:-\n\n1).Pranav Bhaskar = "<<p1[19]<<"\n2).Gaurav Mohindroo = "<<p2[19]<<"\n3).Nandini Maheshwari = "<<p3[19];
		fout<<"\n\nXXI). Deputy Sports Minister:-\n\n1).Kushang Vijay = "<<p1[20]<<"\n2).Aditya Singh Bhoj = "<<p2[20]<<"\n3).Bitthal Yadav = "<<p3[20]<<"\n4).Tanishk Jain = "<<p4[20];
		fout<<"\n\nXXII). Deputy Environment Minister:-\n\n1).Preeti Chaudhary = "<<p1[21]<<"\n2).Dhruv Jain = "<<p2[21]<<"\n3).Yash Meena = "<<p3[21]<<"\n4).Priyanka Survi = "<<p4[21];
		fout<<"\n\nXXIII). Deputy Foreign Minister:-\n\n1).Raghav Bharadwaj = "<<p1[22]<<"\n2).Shruti Sarda = "<<p2[22]<<"\n3).Bhoomi Chauhan = "<<p3[22]<<"\n4).Arnav Sharma = "<<p4[22];
		fout<<"\n\nXXIV). Deputy I.B. Minister:-\n\n1).Palak Agarwal = "<<p1[23]<<"\n2).Mohit Rajpurohit = "<<p2[23]<<"\n3).Anushka Soni = "<<p3[23]<<"\n4).Akhil Garg = "<<p4[23];
		fout<<"\n\nXXV). Deputy I.T. Minister:-\n\n1).Taranpreet Khurana = "<<p1[24]<<"\n2).Ayush Jain = "<<p2[24]<<"\n3).Shruti Singh = "<<p3[24]<<"\n4).Pooja Fauzdar = "<<p4[24];
		fout<<"\n\nXXVI). Deputy Transport Minister:-\n\n1).Ishika Solanki = "<<p1[25]<<"\n2).Jyoti Kunwar = "<<p2[25]<<"\n3).Kartik Safaya = "<<p3[25]<<"\n4).Divyansh Rathore = "<<p4[25];
		fout<<"\n\nXXVII). Deputy Cultural Minister:-\n\n1).Anisha Das = "<<p1[26]<<"\n2).Priya Sneh = "<<p2[26]<<"\n3).Nandita Sogarwal = "<<p3[26]<<"\n4).Garima Jain = "<<p4[26];
		fout<<"\n\nXXVIII). Deputy Food And Health Minister:-\n\n1).Devesh Mahaur = "<<p1[27]<<"\n2).Neha Singh = "<<p2[27]<<"\n3).Aditya Sharma = "<<p3[27];
		fout<<"\n\nXXIX). Deputy Finance Minister:-\n\n1).Yash Jain = "<<p1[28]<<"\n2).Parikshit Sevak = "<<p2[28]<<"\n3).Aashi Agarwal = "<<p3[28]<<"\n4).Manav Sewani = "<<p4[28];
		fout<<"\n\nXXX). Vice Hope House Captain :-\n\n1).Somya Jain = "<<p1[29]<<"\n2).Anirudh Singh = "<<p2[29]<<"\n3).Aryan Malik = "<<p3[29]<<"\n4).Priyanshi Nama = "<<p4[29];
		fout<<"\n\nXXXI). Vice Unity House Captain :-\n\n1).Saransh = "<<p1[30]<<"\n2).Shikhar Audichy = "<<p2[30]<<"\n3).Ananya Soni = "<<p3[30];
		fout<<"\n\nXXXII). Vice Faith House Captain :-\n\n1).Sonia Chabbra = "<<p1[31]<<"\n2).Raghavendra Awasthi = "<<p2[31]<<"\n3).Shobhit Yadav = "<<p3[31]<<"\n4).Depika Parmar = "<<p4[31]<<"\n5).Vishal Mathur = "<<p5[31];
		fout<<"\n\nXXXIII). Vice Truth House Captain :-\n\n1).Aditya Bhalla = "<<p1[32]<<"\n2).Paridhi Agarwal = "<<p2[32]<<"\n3).Abhinav Dadich = "<<p3[32]<<"\n4).Abhimanyu Pareek = "<<p4[32];
		fout.close();
		goto e;
	}
	clrscr();
	head();
	cout<<"\n\n\n\n\n\n\t\t\t    Thank you for voting..\n\n\t\t\t Please leave the computer!!!\n\n";
	getch();
	goto b;
	getch();
}
void head()
{
	cout<<"\t\t\t   RYAN INTERNATIONAL SCHOOL\n\n\t\t\t";
	cout<<"VOTING FOR CABINETS OF 2015-16";
}
void choice()
{
	a:
	cin>>ch;
	if(f1==0)
	{
		for(i=0+i;i<33;i++)
		{
			p1[i]=0,p2[i]=0,p3[i]=0,p4[i]=0,p5[i]=0,p6[i]=0;
			break;
		}
	}
	++i;
	switch(ch)
	{
		case 1:++p1[i-1];
		break;
		case 2:++p2[i-1];
		break;
		case 3:++p3[i-1];
		break;
		case 4:++p4[i-1];
		break;
		case 5:++p5[i-1];
		break;
		case 6:++p6[i-1];
		default:cout<<"WRONG CHIOCE ENTERED. ENTER YOUR CHOICE AGAIN";
		goto a;
		break;
	}
}