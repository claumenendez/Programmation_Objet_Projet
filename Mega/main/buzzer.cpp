#include "buzzer.hpp"

//chanson Grame of Thrones: tableau des notes a reproduire sur le buzzer
int GAME[] = {
  // Game of Thrones
  // Score available at https://musescore.com/user/8407786/scores/2156716
  NOTE_G4,8, NOTE_C4,8, NOTE_DS4,16, NOTE_F4,16, NOTE_G4,8, NOTE_C4,8, NOTE_DS4,16, NOTE_F4,16, //1
  NOTE_G4,8, NOTE_C4,8, NOTE_DS4,16, NOTE_F4,16, NOTE_G4,8, NOTE_C4,8, NOTE_DS4,16, NOTE_F4,16,

};

Buzzer::Buzzer(int p){pin=p;}
void Buzzer::DangerModeActivation(String m){
  if (m=="GAME OF THRONES"){
      playGameofThrones();  
    }
}


void playGameofThrones(){
    pinMode(buz, OUTPUT); 
    int tempo = 85;
    int notes = sizeof(GAME) / sizeof(GAME[0]) / 2;
    int wholenote = (60000 * 4) / tempo;
    int divider = 0, noteDuration = 0;
    // iterate over the notes of the melody.
    // Remember, the array is twice the number of notes (notes + durations)
    for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

        // calculates the duration of each note
        divider = GAME[thisNote + 1];
        if (divider > 0) {
          // regular note, just proceed
          noteDuration = (wholenote) / divider;
        } else if (divider < 0) {
          // dotted notes are represented with negative durations!!
          noteDuration = (wholenote) / abs(divider);
          noteDuration *= 1.5; // increases the duration in half for dotted notes
        }   
    
    // we only play the note for 90% of the duration, leaving 10% as a pause
    tone(buz, GAME[thisNote], noteDuration * 0.9);

    // Wait for the specief duration before playing the next note.
    delay(noteDuration);

    // stop the waveform generation before the next note.
    noTone(buz);
  }  
  musicbuz=false;
}
    

  





    
    
