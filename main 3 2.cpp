#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name,respuesta,accion,dar;
    cout<<"Estás haciendo un viaje en Noruega, 1532, un viajero se te acerca."<<endl;
    cout<<"Viajero: Buenas viajero, ¿puedo preguntarle su nombre?"<<endl<<"Nombre: ";
    cin>>name;
    if (name == "No")
    {
        cout<<"Siento molestarle, un saludo.";
        return 0;
    }
    else
    {
    cout<<"Viajero: Encantado de conocerle "<<name<<", me preguntaba si podrías hacerme un favor, te pagaré bien. "<<endl<<name<<": ";
    }
    cin>>respuesta;
        if (respuesta == "Si")
        {
            cout<<"Viajero: Llevo 1 semana sin comer tomate, si no le es mucha molestia, vaya a la posada más cercana y compreme un tomate, le esperaré aquí."<<endl<<endl;
        }
        else
        {
            cout<<"Viajero: Siga su camino entonces";
            return 0;
        }
    cout<<"Misión: Dar un tomate al viajero"<<endl<<"Opciones:"<<endl<<"1.Ir cuesta abajo."<<endl<<"2.Preguntar para qué quiere un tomate."<<endl<<"3.Buscar en tu zurrón."<<endl<<"Opción: ";
    cin>>accion;
    /*Opciones a elegir*/
        if (accion == "1")
    {
            cout<<endl<<"Bajas la cuesta y llegas a una taberna";
    }
        if (accion == "2")
    {
            cout<<endl<<"Viajero: Es una larga historia, prometí comer tomate todos los meses a alguien."<<endl;
            cout<<name<<": Un poco raro..."<<endl<<endl;
            cout<<"Opciones:"<<endl<<"1.Ir cuesta abajo."<<endl<<"2.Buscar en tu zurrón."<<endl<<"Opción: ";
            cin>>accion;
        /*Sub-acciones de acción 2*/
            if (accion == "1")
            {
                cout<<endl<<"Bajas la cuesta y llegas a una taberna";
            }
            
    }
        if (accion == "3")
    {
            cout<<"Encuentras un tomate en un estado cuestionable."<<endl;
            cout<<name<<" :¿Se lo doy?: ";
            cin>>dar;
                if (dar == "Si")
                {
                    cout<<"Viajero: Esto me servirá, te estaré eternamente agradecido, tome, para usted."<<endl<<"Recibes 15 monedas de plata.";
                    return 0;
                }
            else
            {
                cout<<name<<": tendré que buscar en otra parte.";
                cout<<"Opciones:"<<endl<<"1.Ir cuesta abajo."<<endl<<"2.Preguntar para qué quiere un tomate."<<endl<<"Opción: ";
                cin>>accion;
            /*Sub-acciones de acción 3*/
                if (accion == "1")
                {
                    cout<<endl<<"Bajas la cuesta y llegas a una taberna";
                }
                if (accion == "2")
                {
                    cout<<"Viajero: Es una larga historia, prometí comer tomate todos los meses a alguien.";
                    cout<<name<<": Un poco raro";
            
            
                }
                
            }
            
            
    }
    return 0;
}
    
