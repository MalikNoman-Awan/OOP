using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Cgpa_Calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

            double t1 = Int32.Parse(textBox1.Text);
            double t2 = Int32.Parse(textBox2.Text);
            double t3 = Int32.Parse(textBox3.Text);
            double t4 = Int32.Parse(textBox4.Text);
            double t5 = Int32.Parse(textBox5.Text);
            double t6 = Int32.Parse(textBox6.Text);


            int c1 = Int32.Parse(comboBox1.Text);
            int c2 = Int32.Parse(comboBox2.Text);
            int c3 = Int32.Parse(comboBox3.Text);
            int c4 = Int32.Parse(comboBox4.Text);
            int c5 = Int32.Parse(comboBox5.Text);
            int c6 = Int32.Parse(comboBox6.Text);

            if (textBox1.Text == "" || textBox2.Text == "" || textBox3.Text == "" || textBox4.Text == "" || textBox5.Text == "" || textBox6.Text == "")
            {

                MessageBox.Show("Please enter complete data directly");

            }
            else
            {



                if (checkBox1.Checked == true)
                {
                    if (textBox1.Text == "" && comboBox1.Text == "")
                    {
                        t1 = 0;
                        c1 = 0;
                    }
                    else
                    {
                        t1 = 0;
                        c1 = 0;
                    }

                }


                if (checkBox2.Checked == true)
                {
                    if (textBox2.Text == "" && comboBox2.Text == "")
                    {
                        c2 = 0;
                        t2 = 0;
                    }
                    else
                    {
                        c2 = 0;
                        t2 = 0;
                    }
                }


                if (checkBox3.Checked == true)
                {
                    if (textBox3.Text == "" || comboBox3.Text == "")
                    {
                        c3 = 0;
                        t3 = 0;
                    }
                    else
                    {
                        c3 = 0;
                        t3 = 0;
                    }
                }


                if (checkBox4.Checked == true)
                {
                    if (textBox4.Text == "" || comboBox4.Text == "")
                    {
                        t4 = 0;
                        c4 = 0;
                    }
                    else
                    {
                        t4 = 0;
                        c4 = 0;
                    }
                }
                if (checkBox5.Checked == true)
                {
                    if (textBox5.Text == "" || comboBox5.Text == "")
                    {
                        c5 = 0;
                        t5 = 0;
                    }
                    else
                    {
                        c5 = 0;
                        t5 = 0;
                    }
                }
                if (checkBox6.Checked == true)
                {
                    if (textBox6.Text == "" || comboBox6.Text == "")
                    {
                        c6 = 0;
                        t6 = 0;
                    }
                    else
                    {
                        t6 = 0;
                        c6 = 0;
                    }
                }



                double point1 = Points(t1) * c1;
                double point2 = Points(t2) * c2;
                double point3 = Points(t3) * c3;
                double point4 = Points(t4) * c4;
                double point5 = Points(t5) * c5;
                double point6 = Points(t6) * c6;

                double point = point1 + point2 + point3 + point4 + point5 + point6;

                double com = c1 + c2 + c3 + c4 + c5 + c6;
                double gpa;
                gpa = point / com;
                // MessageBox.Show(gpa.ToString("0.00"));
                
                label13.Text = "CGPA=" + gpa.ToString("0.00");
                label13.Visible = true;
                
                
                label14.Text = "Total Credit Hour's=" + com.ToString();
                label14.Visible = true;
               
                



                double Points(double m)
                {

                    if (m >= 90 && m <= 100)
                    {
                        double p = 4;
                        return p;
                    }
                    else if (m >= 80 && m <= 89)
                    {
                        double p = 4;
                        return p;
                    }
                    else if (m >= 70 && m <= 79)
                    {
                        double p = 3;
                        double rem = m % 10;
                        double div = rem / 10;
                        p = p + div;
                        return p;
                    }

                    else if (m >= 60 && m <= 69)
                    {
                        double p = 2;
                        double rem = m % 10;
                        double div = rem / 10;
                        p = p + div;
                        return p;
                    }

                    else if (m >= 50 && m <= 59)
                    {
                        double p = 1;
                        double rem = m % 10;
                        double div = rem / 10;
                        p = p + div;
                        return p;
                    }
                    else
                    {
                        double p = 0;
                        return p;
                    }


                }


                //Grade Function
                string Grade(double g)
                {
                    if (g >= 90 && g <= 100)
                    {

                        return "A+";

                    }
                    else if (g >= 80 && g <= 89)
                    {
                        return  "A";
                       
                    }
                    else if (g >= 70 && g <= 79)
                    {
                        return "B";
                    }

                    else if (g >= 60 && g <= 69)
                    {
                        return "C";
                    }

                    else if (g >= 50 && g <= 59)
                    {
                        return "D";
                    }

                    else /*if (g < 50)*/
                    {
                        if (checkBox1.Checked==true)
                        {
                            return "W";
                        }
                        else if (checkBox2.Checked==true)
                        {
                            return "W";
                        }
                        else if (checkBox3.Checked==true)
                        {
                            return "W";
                        }
                        else if (checkBox4.Checked==true)
                        {
                            return "W";
                        }
                        else if (checkBox5.Checked==true)
                        {
                           return "W";
                           
                        }
                        else if (checkBox6.Checked==true)
                        {
                            return "W";
                        }
                        else
                        {
                            return "F";

                        }

                    }
                }


                label7.Text = Grade(t1);
                label7.Visible = true;

                label8.Text = Grade(t2);
                label8.Visible = true;

                label9.Text = Grade(t3);
                label9.Visible = true;

                label10.Text = Grade(t4);
                label10.Visible = true;

                label11.Text = Grade(t5);
                label11.Visible = true;

                label12.Text = Grade(t6);
                label12.Visible = true;




            }


        }


        private void textBox1_TextChanged(object sender, EventArgs e)
        {

            while (true)
            {
                if (textBox1.Text == "")
                {
                    // MessageBox.Show("Enter again no input");
                    label13.Text = "Please re-enter the number.";
                    label13.Visible = true;
                    break;

                }
                else
                {
                    double num1 = Int32.Parse(textBox1.Text);
                    if (num1 >= 0 && num1 <= 100)
                    {
                        break;
                    }
                    else
                    {
                        // MessageBox.Show("Please Enter greater than 0 and less than 100");

                        label13.Text = "Please enter B/W 0 and 100";
                        label13.Visible = true;
                        break;
                    }
                }
            }
        }



        private void textBox2_TextChanged_1(object sender, EventArgs e)
        {

            while (true)
            {
                if (textBox2.Text == "")
                {
                   
                    label13.Text = "Please re-enter the number.";
                    label13.Visible = true;
                    break;

                }
                else
                {
                    double num2 = Int32.Parse(textBox2.Text);
                    if (num2 >= 0 && num2 <= 100)
                    {
                        break;
                    }
                    else
                    {

                        label13.Text = "Please enter more than 0 and less than 100.";
                        label13.Visible = true;
                        break;
                    }
                }
            }
        }




        private void textBox3_TextChanged_1(object sender, EventArgs e)
        {
            while (true)
            {
                if (textBox3.Text == "")
                {
                    
                    label13.Text = "Please re-enter the number.";
                    label13.Visible = true;
                    break;

                }
                else
                {
                    double num3 = Int32.Parse(textBox3.Text);
                    if (num3 >= 0 && num3 <= 100)
                    {
                        break;
                    }
                    else
                    {

                        label13.Text = "Please enter more than 0 and less than 100.";
                        label13.Visible = true;
                        break;
                    }
                }
            }

        }





        private void textBox4_TextChanged_1(object sender, EventArgs e)
        {
            while (true)
            {
                if (textBox4.Text == "")
                {
                  
                    label13.Text = "Please re-enter the number.";
                    label13.Visible = true;
                    break;

                }
                else
                {
                    double num4 = Int32.Parse(textBox4.Text);
                  if (num4 >= 0 && num4 <= 100)
                  {
                    break;
                  }
                   else
                   {

                        label13.Text = "Please enter more than 0 and less than 100.";
                        label13.Visible = true;
                        break;
                   }
            }
            }
        }



        private void textBox5_TextChanged_1(object sender, EventArgs e)
        {
            while (true)
            {
                if (textBox5.Text == "")
                {
                   
                    label13.Text = "Please re-enter the number.";
                    label13.Visible = true;
                    break;

                }
                else
                {
                    double num5 = Int32.Parse(textBox5.Text);
                    if (num5 >= 0 && num5 <= 100)
                    {
                        break;
                    }
                    else
                    {
                        label13.Text = "Please enter more than 0 and less than 100.";
                        label13.Visible = true;
                        break;
                    }
                }
            }
        }



        private void textBox6_TextChanged_1(object sender, EventArgs e)
        {

            while (true)
            {
                if (textBox6.Text == "")
                {
                   
                    label13.Text = "Please re-enter the number.";
                    label13.Visible = true;
                    break;
                    
                }
                else
                {
                    double num6 = Int32.Parse(textBox6.Text);
                    if (num6 >= 0 && num6 <= 100)
                    {

                        break;

                    }
                    else
                    {

                        label13.Text = "Please enter more than 0 and less than 100.";
                        label13.Visible = true;
                        break;
                    }
                }
               
            }
                    
            }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
            textBox4.Text = "";
            textBox5.Text = "";
            textBox6.Text = "";


            textBox7.Text = "";
            textBox8.Text = "";
            textBox9.Text = "";
            textBox10.Text = "";
            textBox11.Text = "";
            textBox12.Text = "";

            comboBox1.Text = "";
            comboBox2.Text = "";
            comboBox3.Text = "";
            comboBox4.Text = "";
            comboBox5.Text = "";
            comboBox6.Text = "";

            checkBox1.Checked = false;
            checkBox2.Checked = false;
            checkBox3.Checked = false;
            checkBox4.Checked = false;
            checkBox5.Checked = false;
            checkBox6.Checked = false;

            label7.Text = "";
            label8.Text = "";
            label9.Text = "";
            label10.Text = "";
            label11.Text = "";
            label12.Text = "";

            label13.Text = "";
            label14.Text = "";

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
           
           
        }
    }
    }
    

