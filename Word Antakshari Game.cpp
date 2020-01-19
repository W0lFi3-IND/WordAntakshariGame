#include<iostream>
#include<cstdlib>
#include<fstream>
#include <ctime>

using namespace std;
string a[85000];

int computer_score = 0;
int user_score = 0;
string computer(string alpha = "a") {
  srand(time(NULL));
  string word;
  if (alpha == "a" || alpha == "A") {
    int i = rand() % (5105 - 1 + 1) + 1;
    word = a[i];

  } else if (alpha == "b" || alpha == "B") {
    int i = rand() % (9939 - 5106 + 1) + 5106;
    word = a[i];

  } else if (alpha == "c" || alpha == "C") {
    int i = rand() % (18033 - 9940 + 1) + 9940;
    word = a[i];

  } else if (alpha == "d" || alpha == "D") {
    int i = rand() % (23619 - 18034 + 1) + 18034;
    word = a[i];

  } else if (alpha == "e" || alpha == "E") {
    int i = rand() % (27229 - 23620 + 1) + 23620;
    word = a[i];

  } else if (alpha == "f" || alpha == "F") {
    int i = rand() % (30784 - 27230 + 1) + 27230;
    word = a[i];

  } else if (alpha == "g" || alpha == "G") {
    int i = rand() % (33461 - 30785 + 1) + 30785;
    word = a[i];

  } else if (alpha == "h" || alpha == "H") {
    int i = rand() % (36477 - 33462 + 1) + 33462;
    word = a[i];

  } else if (alpha == "i" || alpha == "I") {
    int i = rand() % (39999 - 36478 + 1) + 36478;
    word = a[i];

  } else if (alpha == "j" || alpha == "J") {
    int i = rand() % (40806 - 40000 + 1) + 40000;
    word = a[i];

  } else if (alpha == "k" || alpha == "K") {
    int i = rand() % (41504 - 40807 + 1) + 40807;
    word = a[i];

  } else if (alpha == "l" || alpha == "L") {
    int i = rand() % (44026 - 41505 + 1) + 41505;
    word = a[i];

  } else if (alpha == "m" || alpha == "M") {
    int i = rand() % (48680 - 44027 + 1) + 44027;
    word = a[i];

  } else if (alpha == "n" || alpha == "N") {
    int i = rand() % (50161 - 48681 + 1) + 48681;
    word = a[i];

  } else if (alpha == "o" || alpha == "O") {
    int i = rand() % (52385 - 50162 + 1) + 50162;
    word = a[i];

  } else if (alpha == "p" || alpha == "P") {
    int i = rand() % (58937 - 52386 + 1) + 52386;
    word = a[i];

  } else if (alpha == "q" || alpha == "Q") {
    int i = rand() % (59385 - 58938 + 1) + 58938;
    word = a[i];

  } else if (alpha == "r" || alpha == "R") {
    int i = rand() % (64277 - 59386 + 1) + 59386;
    word = a[i];

  } else if (alpha == "s" || alpha == "S") {
    int i = rand() % (73432 - 64278 + 1) + 64278;
    word = a[i];

  } else if (alpha == "t" || alpha == "T") {
    int i = rand() % (77640 - 73433 + 1) + 73433;
    word = a[i];

  } else if (alpha == "u" || alpha == "U") {
    int i = rand() % (80312 - 77641 + 1) + 77641;
    word = a[i];

  } else if (alpha == "v" || alpha == "V") {
    int i = rand() % (81684 - 80313 + 1) + 80313;
    word = a[i];

  } else if (alpha == "w" || alpha == "W") {
    int i = rand() % (83648 - 81685 + 1) + 81685;
    word = a[i];

  } else if (alpha == "x" || alpha == "X") {
    int i = rand() % (83695 - 83649 + 1) + 83649;
    word = a[i];

  } else if (alpha == "y" || alpha == "Y") {
    int i = rand() % (83927 - 83696 + 1) + 83696;
    word = a[i];

  } else if (alpha == "z" || alpha == "Z") {
    int i = rand() % (83999 - 839278 + 1) + 83928;
    word = a[i];

  }
  return word;
}
int comp_score(string ret_word) {
  int cal_cs = 0;
  int i = 0;
  for (i = 0; i < ret_word.length(); i++) {
    if (ret_word[i] == 'a' || ret_word[i] == 'e' || ret_word[i] == 'i' ||
      ret_word[i] == 'o' || ret_word[i] == 'u' || ret_word[i] == 'A' ||
      ret_word[i] == 'E' || ret_word[i] == 'I' || ret_word[i] == 'O' ||
      ret_word[i] == 'U') {} else if ((ret_word[i] >= 'a' && ret_word[i] <= 'z') || (ret_word[i] >= 'A' && ret_word[i] <= 'Z')) {
      ++cal_cs;
    }
  }
  computer_score = computer_score + cal_cs;
  return computer_score;
}
int us_score(string ret_word) {
  int cal_us = 0;
  int i = 0;
  for (i = 0; i < ret_word.length(); i++) {
    if (ret_word[i] == 'a' || ret_word[i] == 'e' || ret_word[i] == 'i' ||
      ret_word[i] == 'o' || ret_word[i] == 'u' || ret_word[i] == 'A' ||
      ret_word[i] == 'E' || ret_word[i] == 'I' || ret_word[i] == 'O' ||
      ret_word[i] == 'U') {} else if ((ret_word[i] >= 'a' && ret_word[i] <= 'z') || (ret_word[i] >= 'A' && ret_word[i] <= 'Z')) {
      ++cal_us;
    }
  }
  user_score = user_score + cal_us;
  return user_score;
}
int main() {

  fstream file;
  int i = 0;
  string word;
  file.open("engmix.txt");
  // extracting words from the file 
  while (file >> word) {
    a[i] = word;
    i++;
  }
  string word1;
  string a = "i";
  string ret_letter = "i";
  string user_letter = "i";
  string ret_word = "a";
  cout<<"----------------------------------------------Word Antakshari Game-----------------------------------------------------";
  cout<<"\nRules - >"
  	  <<"\n1.First to reach 100 score will win."
      <<"\n2.Computer will start the game always."
      <<"\nMade by ->Name - Yashovardhan Shaktawat"
      <<"\n\t  SapID - 500062604"
      <<"\n\t  RollNo - 13";
      cout<<"\n\n<-Game Starts->";
  while (1) {
  	if(computer_score>=100)
  	{ cout<<"\n\nCOMPUTER WINS";
  	break;
	  }
	  else if(user_score>=100)
  	{ cout<<"\n\nUser WINS";
  	break;
	  }
	  
    ret_word = computer(a);

    cout << "\n(Computer) Enter a word : " << ret_word;
    cout << "\n Computer current score is : " << comp_score(ret_word);
    for (i = 0; i < ret_word.length(); i++) {
      if (i == ret_word.length() - 1) {
        ret_letter = ret_word[i];
      }
    }

    cout << "\n (USER) Enter a word : ";
    cin >> word1;
    for (i = 0; i < word1.length(); i++) {
      if (i == 0) {
        user_letter = word1[i];
      }
    }
    if (user_letter == ret_letter) {
      cout << "\n User current score is : " << us_score(word1);
      for (i = 0; i < word1.length(); i++) {
        if (i == word1.length() - 1) {
          a = word1[i];
        }

      }
    } else {
      cout << "\nPlease enter correct word";
      cout << "\n (USER) Enter a word :";
      cin >> word1;
      cout << "\n User current score is : " << us_score(word1);
      for (i = 0; i < word1.length(); i++) {
        if (i == 0) {
          user_letter = word1[i];
        }
      }
    }

  }
  return 0;
}
