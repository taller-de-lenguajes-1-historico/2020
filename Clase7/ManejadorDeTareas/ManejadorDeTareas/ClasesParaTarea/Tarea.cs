using System;
using System.Collections.Generic;
using System.Text;

namespace ClasesParaTarea
{
    public enum EstadoTarea
    { 
        Pendiente = 0,
        Haciendo = 2,
        Concluida = 3
    }

    public class Tarea
    {
        private int importancia; 
        private string nombreDeTarea;
        private DateTime fecha;
        EstadoTarea estado;

        public int Importancia { get => importancia; set => importancia = value; }
        public string NombreDeTarea { get => nombreDeTarea; set => nombreDeTarea = value; }
        public DateTime Fecha { get => fecha; set => fecha = value; }
        public EstadoTarea Estado { get => estado; set => estado = value; }
    }
}
