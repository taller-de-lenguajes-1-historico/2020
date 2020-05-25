using System;
using System.Collections.Generic;
using System.Text;

namespace ClasesParaTarea
{
    public class Tarea
    {
        private int importancia; 
        private string nombreDeTarea;
        private DateTime fecha;

        public int Importancia { get => importancia; set => importancia = value; }
        public string NombreDeTarea { get => nombreDeTarea; set => nombreDeTarea = value; }
        public DateTime Fecha { get => fecha; set => fecha = value; }
    }
}
