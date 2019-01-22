#include <iostream>
#include <stdlib.h>

int main(){
  //set the seed of random number generator
  srand(time(NULL));
  int answer=rand()%20;
  std::cout << "MAGIC 8-BALL:\n";
  switch(answer){
    case 0:
    std::cout << "It is certain.\n";
    case 1:
    std::cout << "It is decidedly so.\n";
    case 2:
    std::cout << "Without a doubt.\n";
    case 3:
    std::cout << "Yes - definitely.\n";
    case 4:
    std::cout << "You may rely on it.\n";
    case 5:
    std::cout << "As I see it,yes.\n";
    case 6:
    std::cout << "Most likely.\n";
    case 7:
    std::cout << "Outlook good.\n";
    case 8:
    std::cout << "Yes.\n";
    case 9:
    std::cout << "Signs point to yes.\n";
    case 10:
    std::cout << "Reply hazy, try again.\n";
    case 11:
    std::cout << "Ask again later.\n";
    case 12:
    std::cout << "Better not tell you now.\n";
    case 13:
    std::cout << "Cannot predict now.\n";
    case 14:
    std::cout << "Concentrate and ask again.\n";
    case 15:
    std::cout << "Don't count on it.\n";
    case 16:
    std::cout << "My reply is no.\n";
    case 17:
    std::cout << "My sources say no.\n";
    case 18:
    std::cout << "Outlook not so good.\n";
    default:
    std::cout << "Very doubtful.\n";
  }

  
  
}
