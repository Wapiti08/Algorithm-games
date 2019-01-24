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
  int computer=rand()%3+1;
  
  int user=0;
  
  std::cout <<"=====================\n";
  std::cout <<"rock paper scissors!\n";
  std::cout <<"=====================\n";
  
  std::cout <<"1) ✊\n";
  std::cout <<"2) ✋\n";
  std::cout <<"3) ✌️\n";
  
  std::cout <<"shoot!\n";
  
  std::cin >>user;
  
  if(user==computer){
    std::cout <<"Tie";
  }
  else if(user==1){
    if(computer==2){
      std::cout <<"You lose!sad!\n";
    }
    else{
      std::cout <<"You win!Woohoo!\n";
    }
  }
  else if(user==2){
    if(computer==1){
      std::cout <<"You win!Woohoo!\n";
    }
    else{
      std::cout <<"You lose!sad!\n";
    }
  }
  else if(user==3){
    if(computer==1){
      std::cout <<"You lose!sad!\n";
    }
    else{
      std::cout <<"You win!Woohoo!\n";
    }
  }
  else{
    std::cout <<"Wrong input.\n";
  }
}
