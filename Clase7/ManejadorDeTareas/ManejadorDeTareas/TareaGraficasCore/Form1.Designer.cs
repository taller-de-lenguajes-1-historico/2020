namespace TareaGraficasCore
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.lbTareas = new System.Windows.Forms.ListBox();
            this.btnCrearTarea = new System.Windows.Forms.Button();
            this.dtpFechaTarea = new System.Windows.Forms.DateTimePicker();
            this.txtNombreTarea = new System.Windows.Forms.TextBox();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // lbTareas
            // 
            this.lbTareas.FormattingEnabled = true;
            this.lbTareas.ItemHeight = 15;
            this.lbTareas.Location = new System.Drawing.Point(290, 30);
            this.lbTareas.Name = "lbTareas";
            this.lbTareas.Size = new System.Drawing.Size(309, 259);
            this.lbTareas.TabIndex = 0;
            // 
            // btnCrearTarea
            // 
            this.btnCrearTarea.Location = new System.Drawing.Point(187, 192);
            this.btnCrearTarea.Name = "btnCrearTarea";
            this.btnCrearTarea.Size = new System.Drawing.Size(75, 23);
            this.btnCrearTarea.TabIndex = 1;
            this.btnCrearTarea.Text = "CrearTarea";
            this.btnCrearTarea.UseVisualStyleBackColor = true;
            this.btnCrearTarea.Click += new System.EventHandler(this.btnCrearTarea_Click);
            // 
            // dtpFechaTarea
            // 
            this.dtpFechaTarea.Location = new System.Drawing.Point(62, 40);
            this.dtpFechaTarea.Name = "dtpFechaTarea";
            this.dtpFechaTarea.Size = new System.Drawing.Size(200, 23);
            this.dtpFechaTarea.TabIndex = 2;
            // 
            // txtNombreTarea
            // 
            this.txtNombreTarea.Location = new System.Drawing.Point(62, 84);
            this.txtNombreTarea.Name = "txtNombreTarea";
            this.txtNombreTarea.Size = new System.Drawing.Size(200, 23);
            this.txtNombreTarea.TabIndex = 4;
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(62, 141);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(200, 23);
            this.comboBox1.TabIndex = 5;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 15F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(630, 309);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.txtNombreTarea);
            this.Controls.Add(this.dtpFechaTarea);
            this.Controls.Add(this.btnCrearTarea);
            this.Controls.Add(this.lbTareas);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ListBox lbTareas;
        private System.Windows.Forms.Button btnCrearTarea;
        private System.Windows.Forms.DateTimePicker dtpFechaTarea;
        private System.Windows.Forms.TextBox txtNombreTarea;
        private System.Windows.Forms.ComboBox comboBox1;
    }
}

