using ClasesParaTarea;
using System;
using System.Collections.Generic;

namespace TareaConsolaConListas
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Tarea> ListaDeTareas = new List<Tarea>();
                      

            string salida = "";
            int num = 0;
            do
            {
                Console.WriteLine("Ingrese la descripción de la tarea:");                
                string DescTarea = Console.ReadLine();

                Tarea Ntarea = new Tarea();
                Ntarea.NombreDeTarea = DescTarea;
                Ntarea.Importancia = num++;
                Ntarea.Fecha = System.DateTime.Now.AddDays(num);
                

                ListaDeTareas.Add(Ntarea);                
                
                Console.WriteLine("¿Desea ingrear una nueva tarea (s/n)?");
                salida = Console.ReadLine();
            } while (salida != "n");

            ListaDeTareas[0].Estado = EstadoTarea.Concluida;

            foreach (Tarea TareaX in ListaDeTareas)
            {
                Console.WriteLine(TareaX.Importancia + " - " + TareaX.NombreDeTarea +" - " + TareaX.Estado);
            }


        }
    }
}
