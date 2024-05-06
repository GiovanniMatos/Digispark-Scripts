#include <DigiKeyboard.h>

void setup() {
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(0); // tecla Windows
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // tecla Win + R 
  DigiKeyboard.delay(1000); 
  DigiKeyboard.println("cmd"); // Digita "cmd"
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(3000); 
  DigiKeyboard.print("start chrome https?");
  DigiKeyboard.sendKeyStroke(84); //keystroke "/"
  DigiKeyboard.sendKeyStroke(84);
  DigiKeyboard.print("github.com");
  DigiKeyboard.sendKeyStroke(84);
  DigiKeyboard.print("GiovanniMatos");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
}
void loop() {
  // put your main code here, to run repeatedly:

}
