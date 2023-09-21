import java.util.Scanner;

public class App {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        

        int t = sc.nextInt();
        String[][] matriz = { {" ","o"," "}, {"/","|","\\"}, {"/"," ","\\"} };

        for (int a = 0; a < t; a++) {
            String texto = sc.nextLine();
            String palabras[] = texto.split(" ");


            if(palabras[0] == "left"){
                if(palabras[1] == "hand"){
                    if(palabras[3] == "head"){

                    }else if(palabras[3] == "hip"){

                    }else if(palabras[3] == "start"){

                    }
                }else if(palabras[1] == "leg"){
                    if(palabras[2] == "in"){

                    }else if(palabras[2] == "out"){

                    }

                }

            }else if(palabras[0] == "right"){
                if(palabras[1] == "hand"){
                    if(palabras[3] == "head"){

                    }else if(palabras[3] == "hip"){

                    }else if(palabras[3] == "start"){

                    }
                }else if(palabras[1] == "leg"){
                    if(palabras[2] == "in"){

                    }else if(palabras[2] == "out"){

                    }

                }
                
            }else if(palabras[0] == "turn"){
                    
            }else if(palabras[0] == "say"){

            }
                        
                        
        }
                
            
    }
}

