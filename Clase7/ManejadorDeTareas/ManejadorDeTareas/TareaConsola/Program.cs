using ClasesParaTarea;
using System;

namespace TareaConsola
{
    class Program
    {
        static void Main(string[] args)
        {
            Tarea[] MisTareas = new Tarea[10];

            for (int i = 0; i < MisTareas.Length; i++)
            {
                Tarea Mitarea = new Tarea();
                Mitarea.Importancia = i;
                Mitarea.NombreDeTarea = "Tarea Nro " + i;
                Mitarea.Fecha = DateTime.Now.AddDays(i);
                MisTareas[i] = Mitarea;

                Console.WriteLine(MisTareas[i].NombreDeTarea);

            }
        }
    }
}
