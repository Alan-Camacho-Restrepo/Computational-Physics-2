#include <iostream>
#include <string> 

using namespace std;


class LibroCalificar {
public:
	void setCourseName(string name) {
		courseName = name;
	}

	string getCourseName() {
		return courseName;
	}

	void displayMessage() {
		cout << "Bienvenido al libro de calificaciones del curso " << courseName << endl;
	}

private:
	string courseName;
};

int main() {
	string nameOfCourse;
	LibroCalificar myLibroCalificar;

	 //cout << "El nombre inicial del curso es: " << myLibroCalificar.getCourseName() << endl;

	cout << "Entra el nombre del curso: " << endl;

	getline(cin, nameOfCourse);
	myLibroCalificar.setCourseName(nameOfCourse);

	myLibroCalificar.displayMessage();

	return 0;
}


/*

						##########################################
						#										 #
						#										 #
						#			SEGUNDA PARTE				 #
						#										 #
						#										 #
						##########################################

*/


//class LibroCalificar
//{
//public:
//    // Función que muestra un mensaje de bienvenida al usuario de LibroCalificar.
//    void MostrarMensaje(string courseName)
//    {
//        cout << "Bienvendo al libro de calificaciones para\n" << courseName << "!"
//            << endl;
//        return;
//    }
//};
//
//// función principal comienza la ejecución del programa
//int main()
//{
//    string nameOfCourse;
//    LibroCalificar myLibroCalificar; // Crea un objeto LibroCalificar llamado myLibroCalificar
//
//    // pregunta por un nombre para el curso
//    cout << "Please enter the course name:" << endl;
//    getline(cin, nameOfCourse); // NOTABENE: leer el nombre de un curso con espacios en blanco
//
//    // cin >> nameOfCourse;   SOLO LEE HASTA QUE SE ECNUENTRA UN ESPACIO
//
//    cout << endl; // sacar una línea en blanco
//
//    // llame la funcion MostrarMensaje.   Pase nameOfCourse como un argumento
//    myLibroCalificar.MostrarMensaje(nameOfCourse);
//
//    return 0;
//}

/*

						##########################################
						#										 #
						#										 #
						#			PRIMERA PARTE				 #
						#										 #
						#										 #
						##########################################

*/


//#include <iostream>
//
//using namespace std;
//
//class LibroCalificar{
//    public:
//        void displayMessage(){
//            cout << "Bienvenido al libro de calificaciones!" << endl;
//        }
//
//        void courseName() {
//            cout << "Bienvenido al Curso de FC2!" << endl;
//       }
//};
//
//
//int main()
//{
//    LibroCalificar myLibroCalificar;
//    myLibroCalificar.displayMessage();
//    myLibroCalificar.courseName();
//
//    return 0;
//}
