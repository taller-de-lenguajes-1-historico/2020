using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace TareasGraficas
{
    public partial class FrmMuestra : Form
    {
        public FrmMuestra()
        {
            InitializeComponent();

            cbOpciones.Items.Add("Opcion 1");
            cbOpciones.Items.Add("Opcion 2");
            cbOpciones.Items.Add("Opcion 3");

        }
    }
}
