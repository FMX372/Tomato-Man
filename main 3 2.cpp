#include <iostream>
#include <string>
/*Solo funcional en linux o GDB*/
#include <unistd.h>
using namespace std;
int main()
{
    string name,respuesta,dar;
    int dinero = 10,accion;
    /*Intro al juego*/
    cout<<"Estás haciendo un viaje en Noruega, 1532, un viajero se te acerca."<<endl;
        cout.flush();
            sleep(4);
    cout<<"Viajero: Buenas viajero, ¿puedo preguntarle su nombre?"<<endl<<"Nombre: ";
    cin>>name;
    if (name == "No")
    {
            cout.flush();
                sleep(2);
            cout<<"Siento molestarle, un saludo."<<endl;
            cout.flush();
                sleep(2);
            cout<<"Dinero final: ";
            cout<<dinero;
            return 0;
    }
    else
    {
        cout.flush();
            sleep(2);
    cout<<"Viajero: Encantado de conocerle "<<name<<", me preguntaba si podrías hacerme un favor, te pagaré bien. "<<endl<<name<<": ";
    }
    cin>>respuesta;
        if (respuesta == "Si")
        {
            cout.flush();
                sleep(1);
            cout<<"Viajero: Llevo 1 semana sin comer tomate, si no le es mucha molestia, vaya a la posada más cercana y compreme un tomate, le esperaré aquí."<<endl<<endl;
        }
        else
        {
            cout.flush();
                sleep(1);
            cout<<"Viajero: Siga su camino entonces";
            return 0;
        }
        cout.flush();
            sleep(5);
    do{
        cout<<"Misión: Dar un tomate al viajero"<<endl<<"Opciones:"<<endl<<"1.Ir cuesta abajo."<<endl<<"2.Preguntar para qué quiere un tomate."<<endl<<"3.Buscar en tu zurrón."<<endl<<"Opción: ";
        cin>>accion;
    }
    while (accion == 1,2,3);
    /*Opciones a elegir*/
        if (accion == 1)
    {
                cout.flush();
                    sleep(1);
            cout<<endl<<"Bajas la cuesta y llegas a una taberna"<<endl;
                cout.flush();
                    sleep(2);
            cout<<"Tabernero: Buenas, ¿que le puedo servir?"<<endl;
                cout.flush();
                    sleep(2);
            cout<<"Elija una opción: | 1-Pedir tomate | 2-Pedir Bacalao con tomate |"<<endl;
            cin>>accion;
                if (accion == 1)
                {
                        cout.flush();
                            sleep(1);
                    cout<<name<<"¿Podrías darme un tomate?"<<endl;
                    cout<<"Tabernero: ¿Un tomate?";
                /*Esto hace que aparezca el texto cada X segundos*/
                        cout.flush();
                            sleep(1);
                    cout<<".";
                        cout.flush();                                                                                 
                            sleep(1);
                    cout<<".";
                        cout.flush();                                                                                 
                            sleep(1);
                    cout<<".";
                    cout<<"Bueno si es lo que quieres... No creo que deba cobrarle por esto."<<endl;
                        cout.flush();                                                                                 
                            sleep(1);
                    cout<<"Recibes un tomate"<<endl;
                        cout.flush();                                                                                 
                            sleep(1);
                    cout<<"Subes la colina de nuevo y te encuentras con el viajero."<<endl;
                        cout.flush();
                            sleep(2);
                    cout<<"Viajero: ¿Ya regresaste? ¿Obtuviste el tomate? Le estaré eternamente agradecido, tome, por las molestias"<<endl;
                        cout.flush();
                            sleep(2);
                    cout<<"Obtienes 20 monedas";
                        cout.flush();
                            sleep(1);
                    cout<<"Dinero final= ";
                    cout<<dinero + 20;
                    return 0;
                }
                    if (accion == 2)
                    cout<<name<<": Buenas, ¿podría prepararme un bacalao con tomate, preferiblemente con el tomate entero?"<<endl;
                        cout.flush();
                            sleep(2);     
                    cout<<"Tabernero: ...Enseguida se lo preparo"<<endl;
                        cout.flush();
                            sleep(2);
                    cout<<"Gastas 10 monedas";
                        cout.flush();
                            sleep(1);
                    cout<<"Dinero actual= ";
                    cout<<dinero - 10;
                        cout.flush();
                            sleep(2);                            
                    cout<<"Te comes el bacalao y llevas el tomate al viajero..."<<endl;
                        cout.flush();
                            sleep(2);
                    cout<<"Viajero: ¿Obtuviste el tomate? Le estaré agradecido por siempre, acepte esto como ofrenda por sus molestias"<<endl;
                        cout.flush();
                            sleep(2);
                    cout<<"Obtienes 20 monedas";
                        cout.flush();
                            sleep(1);
                    cout<<"Dinero final= ";
                    cout<<dinero + 20;
                    return 0;
    }
        if (accion == 2)
    {
                cout.flush();
                    sleep(2);
            cout<<endl<<"Viajero: Es una larga historia, prometí comer tomate todos los meses a alguien."<<endl;
                cout.flush();
                    sleep(2);
            cout<<name<<": Un poco raro";
            /*Esto hace que aparezca el texto cada X segundos*/
                    cout.flush();
                    sleep(1);
                    cout<<".";
                    cout.flush();
                    sleep(1);
                    cout<<".";
                    cout.flush();
                    sleep(1);
                    cout<<"."<<endl<<endl;
            cout<<"Opciones:"<<endl<<"1.Ir cuesta abajo."<<endl<<"2.Buscar en tu zurrón."<<endl<<"Opción: ";
            cin>>accion;
        /*Sub-acciones de acción 2*/
            if (accion == 1)
            {
                cout<<endl<<"Bajas la cuesta y llegas a una taberna"<<endl;
                cout.flush();
                    sleep(2);
            cout<<"Tabernero: Buenas, ¿que le puedo servir?"<<endl<<"Elija una opción: | 1-Pedir tomate | 2-Pedir Bacalao con tomate |"<<endl;
            cin>>accion;
                if (accion == 1)
                {
                    cout<<name<<"¿Podrías darme un tomate?"<<endl;
                    cout<<"Tabernero: ¿Un tomate?";
                /*Esto hace que aparezca el texto cada X segundos*/
                        cout.flush();
                            sleep(1);
                    cout<<".";
                        cout.flush();                                                                                 
                            sleep(1);
                    cout<<".";
                        cout.flush();                                                                                 
                            sleep(1);
                    cout<<".";
                    cout<<"Bueno si es lo que necesitas... No debería cobrarle por esto."<<endl;
                        cout.flush();                                                                                 
                            sleep(1);
                    cout<<"Recibes un tomate"<<endl;
                        cout.flush();                                                                                 
                            sleep(1);
                    cout<<"Subes la colina de nuevo y te encuentras con el viajero."<<endl;
                        cout.flush();
                            sleep(2);
                    cout<<"Viajero: ¿Ya has regresado? ¿Conseguiste el tomate? Te estaré eternamente agradecido, toma, por las molestias"<<endl;
                        cout.flush();
                            sleep(3);
                    cout<<"Obtienes 20 monedas"<<endl;
                        cout.flush();
                            sleep(1);
                    cout<<"Dinero final= ";
                    cout<<dinero + 20;
                    return 0;

                }
                if (accion == 2)
                {
                    cout<<name<<": Buenas, ¿podría prepararme un bacalao con tomate, preferiblemente con el tomate entero?"<<endl;
                        cout.flush();
                            sleep(2);     
                    cout<<"Tabernero: ...Enseguida se lo preparo"<<endl;
                        cout.flush();
                            sleep(2);
                    cout<<"Gastas 10 monedas";
                        cout.flush();
                            sleep(1);
                    cout<<"Dinero actual= ";
                    cout<<dinero - 10;
                        cout.flush();
                            sleep(2);                            
                    cout<<"Te comes el bacalao y llevas el tomate al viajero..."<<endl;
                        cout.flush();
                            sleep(2);
                    cout<<"Viajero: ¿Obtuviste el tomate? Le estaré agradecido por siempre, acepte esto como ofrenda por sus molestias"<<endl;
                        cout.flush();
                            sleep(3);
                    cout<<"Obtienes 20 monedas"<<endl;
                        cout.flush();
                            sleep(1);
                    cout<<"Dinero final= ";
                    cout<<dinero + 20;
                    return 0;
                    }
            }

    }
    
    
        if (accion == 3)
    {
                cout.flush();
                    sleep(2);
            cout<<"Encuentras un tomate en un estado cuestionable."<<endl;
                cout.flush();
                    sleep(1);
            cout<<name<<" :¿Se lo doy?: ";
            cin>>dar;
                if (dar == "Si")
                {
                        cout.flush();
                            sleep(3);
                    cout<<"Viajero: Esto me servirá, te estaré eternamente agradecido, tome, para usted."<<endl;
                        cout.flush();
                            sleep(2);
                    cout<<"Recibes 15 monedas de plata.";
                    return 0;
                }
            else
            {
                cout<<name<<": Tendré que buscar en otra parte.";
                cout<<"Opciones:"<<endl<<"1.Ir cuesta abajo."<<endl<<"2.Preguntar para qué quiere un tomate."<<endl<<"Opción: ";
                cin>>accion;
            /*Sub-acciones de acción 3*/
                if (accion == 1)
    {
                cout.flush();
                    sleep(1);
            cout<<endl<<"Bajas la cuesta y llegas a una taberna"<<endl;
                cout.flush();
                    sleep(2);
            cout<<"Tabernero: Buenas, ¿que le puedo servir?"<<endl;
                cout.flush();
                    sleep(2);
            cout<<"Elija una opción: | 1-Pedir tomate | 2-Pedir Bacalao con tomate |"<<endl;
            cin>>accion;
                if (accion == 1)
                {
                        cout.flush();
                            sleep(1);
                    cout<<name<<"¿Podrías darme un tomate?"<<endl;
                    cout<<"Tabernero: ¿Un tomate?";
                /*Esto hace que aparezca el texto cada X segundos*/
                    cout.flush();
                    sleep(1);
                    cout<<".";
                    cout.flush();                                                                                 
                    sleep(1);
                    cout<<".";
                    cout.flush();                                                                                 
                    sleep(1);
                    cout<<".";
                    cout<<"Bueno si es lo que quieres... No creo que deba cobrarle por esto."<<endl;
                    cout.flush();                                                                                 
                    sleep(1);
                    cout<<"Recibes un tomate"<<endl;
                    cout.flush();                                                                                 
                    sleep(1);
                    cout<<"Subes la colina de nuevo y te encuentras con el viajero.";
                }
            
    }
                if (accion == 2)
            {
                    cout.flush();
                        sleep(2);
                cout<<endl<<"Viajero: Es una larga historia, prometí comer tomate todos los meses a alguien."<<endl;
                    cout.flush();
                        sleep(2);
                cout<<name<<": Un poco raro";
            /*Esto hace que aparezca el texto cada X segundos*/
                    cout.flush();
                    sleep(1);
                    cout<<".";
                    cout.flush();
                    sleep(1);
                    cout<<".";
                    cout.flush();
                    sleep(1);
                    cout<<"."<<endl<<endl;
                
            }
        }
    }
    return 0;
}
/*Honestamente no sé ni como sigue funcionando*/
