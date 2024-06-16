#include <iostream>
#include <string>
#include <thread> 
#include <chrono>
#include <sstream> 

void printWordsWithDelay(const std::string& text, int delayMs){

  std::istringstream iss(text);
  std::string word;

  while(iss >> word){

    std::cout<< word<<' '<<std::flush;
    std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));

  }
  std::cout << std::ends<<"\n";
}



int main(){
  int choice1;
  int delay = 100;
  std::string scen1 = "George Costanza har lovat Jerry Seinfeld att köpa honom ett nytt par skor eftersom Jerry har förstört sitt favoritpar när han spillde kaffe på dem under en komediakt. George är orolig för att han inte kommer att kunna hitta exakt samma skor och Jerry kommer att bli besviken.";

  printWordsWithDelay(scen1, delay);
  std::cout<<"*    *     * \n";
  std::string text = "Hur löser George situationen?";
  
  printWordsWithDelay(text,delay);


  for(int i = 0; i < 4 && choice1 != 1 && choice1 != 2 && choice1!=3;i++){
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
  std::cout<<"Alternativ 1: George går till flera skobutiker och till slut hittar han exakt samma par som Jerry hade tidigare.\n";
  std::cout<<"Alternativ 2: George blir stressad och köper ett par som liknar Jerrys skor men är inte exakt samma.\n";
  std::cout<<"Alternativ 3: George hittar inte några skor som ens liknar Jerrys gamla och bestämmer sig för att inte säga något.\n";
  std::cout<<"*    *     * \n";
  std::cin >> choice1;
  std::cout<<"*    *     * \n";

  };

  if(choice1 == 1){
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout<<"George överlämnar skorna till Jerry.\n";
    std::cout<<"Jerry: Wow, George! Du gjorde det! Det är exakt samma skor!\n";
    std::cout<<"George: Jag sa ju att jag skulle fixa det! Inga problem alls.\n";
    std::cout<<"Elaine: Otroligt, George. Du har faktiskt lyckats med något!\n";
    std::cout<<"Kramer: Så, vad säger ni? Ska vi fira med lite kaffe? Fast kanske inte i närheten av Jerrys nya skor.\n";

   

  } else if(choice1 == 2){
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout<<"George överlämnar skorna till Jerry.\n";
    std::cout<<"Jerry: George, de här är inte samma skor. De ser nästan lika ut, men de är inte de rätta.\n";
    std::cout<<"George: Vad menar du? De är nästan identiska! Ingen kommer att märka skillnaden.\n";
    std::cout<<"Elaine: Du kan inte ge honom något som bara nästan är rätt, George. Det handlar om detaljerna.\n";
    std::cout<<"Kramer: Jag har en idé! Vi kan måla om dem så de ser exakt ut som de gamla. Jag har en massa färg hemma.\n";

   
  }else if(choice1 == 3){
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout<<"Jerry frågar George om skorna.\n";
    std::cout<<"Jerry: Så, George, hur gick det med skorna?\n";
    std::cout<<"George: Eh... det är en rolig historia faktiskt. Jag hittade inget som passade. Jag tänkte att vi kanske kan hitta något tillsammans istället?\n";
    std::cout<<"Elaine: George, du är hopplös. Varför sa du inte bara att du inte kunde hitta dem?\n";
    std::cout<<"Kramer: Jag har en lösning. Jag vet en kille som gör handgjorda skor. De kommer att vara precis som de gamla, om inte bättre!\n";

    
  } else {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Sorry, you haven't entered a valid choice.\n";
    std::cout << "Goodbye.\n";

    
}

std::string scen2 = "Elaine Benes har en dejt med en man som hon verkligen gillar, och hon vill imponera på honom. Hon bestämmer sig för att laga en komplicerad middag, men hennes köksfärdigheter är inte de bästa.";
printWordsWithDelay(scen2,delay);
std::this_thread::sleep_for(std::chrono::milliseconds(500));
std::cout<<"*    *     * \n";
std::this_thread::sleep_for(std::chrono::milliseconds(500));
std::string text2 = "Hur ska Elaine lösa denna situationen?";

int choice2;


for(int i = 0; i < 3 && choice2 != 1 && choice2 != 2 ;i++){
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
  std::cout<<"Alternativ 1: Hon tar hjälp av sina vänner för laga en middag\n";
  std::cout<<"Alternativ 2: Beställer snabbamat från KinaTown \n";

  std::cin>>choice2;

};

switch(choice2){
  case 1:
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
  std::cout<<"De sitter alla runt bordet, och Elaine och hennes dejt ser glada ut\n";
  std::cout<<"Elaine: Jag kan inte tro att vi faktiskt gjorde det!\n";
  std::cout<<"Jerry: Så, vad tyckte du om det hemliga receptet på såsen?\n";
  std::cout<<"Dejten: Det var otroligt! Du är verkligen en fantastisk kock, Elaine.\n";
  std::cout<<"George: Ja, det var verkligen något. Men nästa gång, kan vi beställa pizza istället?\n";
  break;


  case 2:
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
  std::cout<<"De sitter runt bordet, och Elaines dejt ser obekväm ut.\n";
  std::cout<<"Elaine: Åh nej, du ser ut som om du inte mår bra. Vad hände?\n";
  std::cout<<"Dejten: Jag tror att jag är allergisk mot något i maten.\n";
  std::cout<<"George: Självklart skulle detta hända. Jag visste att vi borde ha kollat på ingredienserna noggrannare.\n";
  std::cout<<"Jerry: Kom igen, vi tar dig till sjukhuset. Elaine, du borde nog hålla dig till enklare recept nästa gång.\n";
  std::cout<<"Kramer: Jag har en vän som är allergispecialist. Han kan fixa det här på nolltid!\n";
  break;

  default:
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
  std::cout<<"Sorry men du har inte valt ett giltigt svar\n";
  std::cout<<"HEJDÅ!\n";
  return 0;
  
  }


};