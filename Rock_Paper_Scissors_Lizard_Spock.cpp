/*
Prompt the user to select either Rock, Paper, Scissors, Lizard, or Spock.
Instruct the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
Compare the user's choice and the computer's choice and determine the winner.
Inform the user who the winner is
*/

#include <iostream>
#include <stdlib.h>

int main(){
  srand(time(NULL));
  int computer=rand()%5+1;
  
  int user=0;
  
  std::cout <<"=====================\n";
  std::cout <<"rock paper scissors lizard spock!\n";
  std::cout <<"=====================\n";
  
  std::cout <<"1) Rock\n";
  std::cout <<"2) Paper\n";
  std::cout <<"3) Scissors\n";
  std::cout <<"4) Lizard\n";
  std::cout <<"5) Spock\n";
  
  std::cout <<"shoot!\n";
  
  std::cin >>user;
  
  switch(user){
      case 1://User is Rock
      std::cout <<"User is Rock.\n";
      switch(computer){
        case 1:
          std::cout <<"Computer is Rock.\n";
          std::cout <<"Tie";
          break;
        case 2:
          std::cout <<"Computer is Paper.\n";
          std::cout <<"You lost!";
          break;
        case 3:
          std::cout <<"Computer is scissors.\n";
          std::cout <<"You lost!";
          break;
        case 4:
          std::cout <<"Computer is lizard.\n";
          std::cout <<"You win!";
          break;
        case 5:
          std::cout <<"Computer is spock.\n";
          std::cout <<"You win!";
          break;
      }
      break;
    case 2:
      std::cout <<"User is Paper.\n"; 
      switch(computer){
        case 1:
          std::cout <<"Computer is Rock.\n";
          std::cout <<"You win";
          break;
        case 2:
          std::cout <<"Computer is Paper.\n";
          std::cout <<"Tie!";
          break;
        case 3:
          std::cout <<"Computer is scissors.\n";
          std::cout <<"You lost!";
          break;
        case 4:
          std::cout <<"Computer is lizard.\n";
          std::cout <<"You lost!";
          break;
        case 5:
          std::cout <<"Computer is spock.\n";
          std::cout <<"You win!";
          break;
      }
      break;
      case 3:
      std::cout <<"User is Scissors.\n"; 
      switch(computer){
        case 1:
          std::cout <<"Computer is Rock.\n";
          std::cout <<"You win!";
          break;
        case 2:
          std::cout <<"Computer is Paper.\n";
          std::cout <<"You win!";
        	break;
        case 3:
          std::cout <<"Computer is scissors.\n";
          std::cout <<"Tie!";
          break;
        case 4:
          std::cout <<"Computer is lizard.\n";
          std::cout <<"You lost!";
          break;
        case 5:
          std::cout <<"Computer is spock.\n";
          std::cout <<"You lost!";
          break;
      }
      break;
      case 4:
      std::cout <<"User is Lizard.\n"; 
      switch(computer){
        case 1:
          std::cout <<"Computer is Rock.\n";
          std::cout <<"You lost!";
          break;
        case 2:
          std::cout <<"Computer is Paper.\n";
          std::cout <<"You win!";
          break;
        case 3:
          std::cout <<"Computer is scissors.\n";
          std::cout <<"You win!";
          break;
        case 4:
          std::cout <<"Computer is lizard.\n";
          std::cout <<"Tie!";
          break;
        case 5:
          std::cout <<"Computer is spock.\n";
          std::cout <<"You lost!";
          break;
      }
      break;
      case 5:
      std::cout <<"User is Spock.\n"; 
      switch(computer){
        case 1:
          std::cout <<"Computer is Rock.\n";
          std::cout <<"You lost!";
          break;
        case 2:
          std::cout <<"Computer is Paper.\n";
          std::cout <<"You lost!";
          break;
        case 3:
          std::cout <<"Computer is scissors.\n";
          std::cout <<"You win!";
          break;
        case 4:
          std::cout <<"Computer is lizard.\n";
          std::cout <<"You win!";
          break;
        case 5:
          std::cout <<"Computer is spock.\n";
          std::cout <<"Tie!";
          break;
      }
      break;
  }
}
