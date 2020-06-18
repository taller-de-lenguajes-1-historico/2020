using ClasesParaTarea;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TareaGraficasCore
{
    public partial class Form1 : Form
    {
        List<Tarea> MiListadoDeTareas;
        public Form1()
        {
            InitializeComponent();

            comboBox1.Items.Add("Pendiente"); //Enum.GetValues(typeof(EstadoTarea));
            comboBox1.Items.Add("Haciendo");
            comboBox1.Items.Add("Concluida");
            MiListadoDeTareas = new List<Tarea>();
            
            Dictionary<string, string> midiccionario = new Dictionary<string, string>();
            midiccionario.Add("Hello", "Hola");
        }

        private void btnCrearTarea_Click(object sender, EventArgs e)
        {
            Tarea NuevaTarea = CrearTarea();
            lbTareas.Items.Add(NuevaTarea.MostrarTarea());
            MiListadoDeTareas.Add(NuevaTarea);
        }

        private Tarea CrearTarea()
        {
            Tarea NuevaTarea = new Tarea();
            NuevaTarea.NombreDeTarea = txtNombreTarea.Text;
            NuevaTarea.Fecha = dtpFechaTarea.Value;

            Random r = new Random();
            NuevaTarea.Importancia = r.Next(1, 100);


            EstadoTarea EnumAux = EstadoTarea.Pendiente;
            if (comboBox1.SelectedItem == "Pendiente")
            {
                EnumAux = EstadoTarea.Pendiente;
            }

            if (comboBox1.SelectedItem == "Haciendo")
            {
                EnumAux = EstadoTarea.Haciendo;
            }

            if (comboBox1.SelectedItem == "Concluida")
            {
                EnumAux = EstadoTarea.Concluida;
            }

            NuevaTarea.Estado = EnumAux;

            return NuevaTarea;

        }
    }
}
