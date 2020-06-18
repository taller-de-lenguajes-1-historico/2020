namespace TareasGraficas
{
    partial class FrmMuestra
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.lbItems = new System.Windows.Forms.ListBox();
            this.dtpFechas = new System.Windows.Forms.DateTimePicker();
            this.cbOpciones = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // lbItems
            // 
            this.lbItems.FormattingEnabled = true;
            this.lbItems.Location = new System.Drawing.Point(412, 66);
            this.lbItems.Name = "lbItems";
            this.lbItems.Size = new System.Drawing.Size(336, 316);
            this.lbItems.TabIndex = 0;
            // 
            // dtpFechas
            // 
            this.dtpFechas.CustomFormat = "";
            this.dtpFechas.Location = new System.Drawing.Point(116, 76);
            this.dtpFechas.Name = "dtpFechas";
            this.dtpFechas.Size = new System.Drawing.Size(200, 20);
            this.dtpFechas.TabIndex = 1;
            // 
            // cbOpciones
            // 
            this.cbOpciones.FormattingEnabled = true;
            this.cbOpciones.Location = new System.Drawing.Point(116, 126);
            this.cbOpciones.Name = "cbOpciones";
            this.cbOpciones.Size = new System.Drawing.Size(200, 21);
            this.cbOpciones.TabIndex = 2;
            // 
            // FrmMuestra
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.cbOpciones);
            this.Controls.Add(this.dtpFechas);
            this.Controls.Add(this.lbItems);
            this.Name = "FrmMuestra";
            this.Text = "FrmMuestra";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ListBox lbItems;
        private System.Windows.Forms.DateTimePicker dtpFechas;
        private System.Windows.Forms.ComboBox cbOpciones;
    }
}