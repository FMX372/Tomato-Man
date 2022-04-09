#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name,respuesta;
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
    cout<<"Viajero: Encantado de conocerle "<<name<<", me preguntaba si podrías hacerme un favor, te pagaré bien."<<endl<<name<<":";
    }
    cin>>respuesta;
        if (respuesta == "Si")
        {
            cout<<"Viajero: Llevo 1 semana sin comer tomate, si no le es mucha molestia, vaya a la posada más cercana y compreme un tomate, le esperaré aquí"<<endl;
        }
        else
        {
            cout<<"Viajero: Siga su camino entonces";
            return 0;
        }
    cout<<"Misión: Dar un tomate al viajero"<<endl<<"Opciones:"<<endl<<"1.Ir cuesta abajo"<<endl<<"2.Preguntar para qué quiere un tomate"<<endl<<"3.Buscar en tu zurrón";
    return 0;
}