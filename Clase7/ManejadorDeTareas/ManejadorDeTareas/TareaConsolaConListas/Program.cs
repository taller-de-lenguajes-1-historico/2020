using ClasesParaTarea;
using System;
using System.Collections.Generic;

namespace TareaConsolaConListas
{
    class Program
    {
        static void Main(string[] args)
        {
            List<Tarea> ListaDeDatos = new List<Tarea>();

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
                Ntarea.Estado = EstadoTarea.Pendiente;

                ListaDeDatos.Add(Ntarea);

                Console.WriteLine("¿Desea ingrear una nueva tarea (s/n)?");
                salida = Console.ReadLine();
            } while (salida != "n");

            ListaDeDatos[0].Estado = EstadoTarea.Concluida;

            foreach (Tarea TareaX in ListaDeDatos)
            {
                Console.WriteLine(TareaX.Importancia + " - " + TareaX.NombreDeTarea +" - " + TareaX.Estado);
            }


        }
    }
}
