#include <gtk/gtk.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

static GtkWidget *result;
static GtkWidget *output;
static GtkWidget *number1;
static GtkWidget *combo_box1;
static GtkWidget *combo_box2;
const char *scale1[] = {"ช้อนชา", "ช้อนโต๊ะ","เครื่องชั่ง(หน่วยกรัม)","ถ้วยตวง", "ปอนด์", "ไพน์", "ควอท", "แกลลอน","ออนซ์"};
const char *scale2[] = {"ช้อนชา", "ช้อนโต๊ะ","เครื่องชั่ง(หน่วยกรัม)","ถ้วยตวง", "ปอนด์", "ไพน์", "ควอท", "แกลลอน","ออนซ์"};



void do_calculate(GtkWidget *button2, gpointer data) {
    char* ck1 = (char*)gtk_entry_get_text(GTK_ENTRY(number1));
    char buffer[100];
    int check = 0;

// *********************************** ดักคนใส่ เศษส่วน ****************
    for (int j = 0; j < 10;j++)
    {
        if (ck1[j] == 47)
        {
            snprintf(buffer, sizeof(buffer), "กรุณากรอกใหม่");
            gtk_label_set_text(GTK_LABEL(output), buffer);
            check ++;
            break;
        }
    }

if (check == 0)
    {
    double num1 = atof((char *)gtk_entry_get_text(GTK_ENTRY(number1)));
    gchar *select_scale1 = gtk_combo_box_text_get_active_text(GTK_COMBO_BOX_TEXT(combo_box1));
    gchar *select_scale2 = gtk_combo_box_text_get_active_text(GTK_COMBO_BOX_TEXT(combo_box2));

// *********************************** แปลงช้อนชาเป็น... ****************
    if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
            snprintf(buffer, sizeof(buffer), "%.03lf %s", num1 ,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);

    }


    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1/(0.33333333333);
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);

    }


     else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/5;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }


    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1/0.02083333333;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }


    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        double box = num1/0.01041666666;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);

    }


    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        double box = num1/0.01041666666;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }


    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1/0.00520833333;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*768.00;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1*6;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }


// *********************************** แปลงช้อนโต๊ะเป็น... ****************

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1/3;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }


    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
            snprintf(buffer, sizeof(buffer), "%.03lf %s", num1 ,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }



    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/16;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1/0.0625;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        double box = num1/0.03125;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }


    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        double box = num1/0.03125;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1/0.015625;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*256;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1*2;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

// *********************************** แปลงกรัมเป็น... ****************

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1*5;
            snprintf(buffer, sizeof(buffer), "%.03lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }



    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1*15;
            snprintf(buffer, sizeof(buffer), "%.03lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }


    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
            snprintf(buffer, sizeof(buffer), "%.03lf กรัม", num1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1*240;
            snprintf(buffer, sizeof(buffer), "%.03lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        double box = num1*453.59;
            snprintf(buffer, sizeof(buffer), "%.03lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }


       else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        double box = num1*480;
            snprintf(buffer, sizeof(buffer), "%.03lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1*960;
            snprintf(buffer, sizeof(buffer), "%.03lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*3840;
            snprintf(buffer, sizeof(buffer), "%.03lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1*28.3495;
            snprintf(buffer, sizeof(buffer), "%.03lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

// *********************************** แปลงถ้วยตวงเป็น... ****************

    else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1*0.02083333333;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1*0.0625;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/240;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

            else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
            snprintf(buffer, sizeof(buffer), "%.03lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        double box = num1/0.5;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        double box = num1*2;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

            else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1*4;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*16;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1/8;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }
// *********************************** แปลงปอนด์เป็น... ****************
        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1/228;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1/96;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/453.59;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1/2;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
            snprintf(buffer, sizeof(buffer), "%.03lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
            snprintf(buffer, sizeof(buffer), "%.03lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1*2;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*8;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1/16;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    // *********************************** แปลงไฟน์เป็น... ****************
        else if (strcmp(select_scale1, scale1[5]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1/96;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[5]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1/32;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[5]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/480;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[5]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1/2;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[5]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
            snprintf(buffer, sizeof(buffer), "%.03lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[5]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
            snprintf(buffer, sizeof(buffer), "%.03lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[5]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1*2;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[5]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*8;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[5]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1/16;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

    // *********************************** แปลงควอทเป็น... ****************

        else if (strcmp(select_scale1, scale1[6]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1/192;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[6]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1/64;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[6]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/960;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[6]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1/4;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[6]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        double box = num1/2;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[6]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        double box = num1/2;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[6]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
            snprintf(buffer, sizeof(buffer), "%.03lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[6]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*4;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[6]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1/40;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }
    // *********************************** แปลงแกลลอนเป็น... ****************
        else if (strcmp(select_scale1, scale1[7]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1/768;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[7]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1/256;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[7]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/3840;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[7]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1/16;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[7]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        double box = num1/8;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[7]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        double box = num1/8;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[7]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1/4;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[7]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
            snprintf(buffer, sizeof(buffer), "%.03lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[7]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1/128;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

//*********************************** แปลงออนซ์เป็น... ****************
        else if (strcmp(select_scale1, scale1[8]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1/6;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[8]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1/2;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[8]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/30;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[8]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1*8;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[8]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        double box = num1/0.06;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[8]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        double box = num1/0.0625;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[8]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1/0.03;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[8]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*128;
            snprintf(buffer, sizeof(buffer), "%.03lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }

        else if (strcmp(select_scale1, scale1[8]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
            snprintf(buffer, sizeof(buffer), "%.03lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
    }
}
}








static void help(GtkApplication *app,GtkWidget *widget, gpointer data) {
    GtkWidget *window;
    GtkWidget *image2;
    GtkWidget *layout;
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window), "help");
    gtk_container_set_border_width (GTK_CONTAINER (window), 50);
    gtk_widget_set_size_request (window, 640, 790);
    gtk_window_set_position (GTK_WINDOW (window), GTK_WIN_POS_CENTER);
    layout = gtk_layout_new(NULL, NULL);
    gtk_container_add(GTK_CONTAINER (window), layout);
    gtk_widget_show(layout);
    image2 = gtk_image_new_from_file("help2.png");
    gtk_layout_put(GTK_LAYOUT(layout), image2, 0, 0);

    gtk_widget_show_all (window);
}



static void section(GtkApplication *app,GtkWidget *widget, gpointer data) {
    GtkWidget *window,*grid,*box;
    GtkWidget *button,*button2;
    GtkWidget *image2;
    GtkWidget *layout;


    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window), "The Changer Bakery");
    gtk_container_set_border_width (GTK_CONTAINER (window), 0);
    gtk_window_set_default_size(GTK_WINDOW(window), 1000, 700);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    layout = gtk_layout_new(NULL, NULL);
    gtk_container_add(GTK_CONTAINER (window), layout);
    gtk_widget_show(layout);
    image2 = gtk_image_new_from_file("2.jpg");
    gtk_layout_put(GTK_LAYOUT(layout), image2, 0, 0);
    grid = gtk_grid_new ();
    gtk_container_add (GTK_CONTAINER (window), grid);





    button = gtk_button_new();
     image2 = gtk_image_new_from_file("help.png");
    gtk_button_set_image(GTK_BUTTON(button), image2);
    gtk_button_set_relief(GTK_BUTTON(button), GTK_RELIEF_NONE);
    g_signal_connect (button, "clicked", G_CALLBACK (help), (gpointer) window);
    gtk_layout_put(GTK_LAYOUT(layout), button, 50, 0);
    gtk_grid_attach(GTK_GRID(grid), button, 0, 0, 1, 1);



    image2 = gtk_image_new_from_file("text2.png");
    gtk_layout_put(GTK_LAYOUT(layout), image2, 110, 100);
    gtk_grid_attach(GTK_GRID(grid), image2, 2, 1, 1, 1);


        number1 = gtk_entry_new();
     gtk_layout_put(GTK_LAYOUT(layout), number1, 500, 140);
    gtk_grid_attach(GTK_GRID(grid), number1, 3, 1, 1, 1);


    image2 = gtk_image_new_from_file("text1.png");
    gtk_layout_put(GTK_LAYOUT(layout), image2, 100, 180);
    gtk_grid_attach(GTK_GRID(grid), image2, 0, 3, 1, 1);

    combo_box1 = gtk_combo_box_text_new();
    gtk_layout_put(GTK_LAYOUT(layout), combo_box1, 450, 220);
    gtk_grid_attach(GTK_GRID(grid), combo_box1, 2, 3, 1, 1);

    for (int i = 0; i < G_N_ELEMENTS(scale1); i++){
        gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT(combo_box1), scale1[i]);
    }
    gtk_combo_box_set_active(GTK_COMBO_BOX(combo_box1), 0);




    image2 = gtk_image_new_from_file("text3.png");
    gtk_layout_put(GTK_LAYOUT(layout), image2, 100, 260);
    gtk_grid_attach(GTK_GRID(grid), image2, 3, 3, 1, 1);



    combo_box2 = gtk_combo_box_text_new();
    gtk_layout_put(GTK_LAYOUT(layout), combo_box2, 470, 300);
    gtk_grid_attach(GTK_GRID(grid), combo_box2, 4, 3, 1, 1);

    for (int i = 0; i < G_N_ELEMENTS(scale2); i++){
        gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT(combo_box2), scale2[i]);
    }
    gtk_combo_box_set_active(GTK_COMBO_BOX(combo_box2), 0);


    button2 = gtk_button_new();
    image2 = gtk_image_new_from_file("ปุ่ม2.png");
    gtk_button_set_image(GTK_BUTTON(button2), image2);
    gtk_button_set_relief(GTK_BUTTON(button2), GTK_RELIEF_NONE);
    g_signal_connect(button2, "clicked", G_CALLBACK (do_calculate), (gpointer) window);
    gtk_layout_put(GTK_LAYOUT(layout), button2, 390, 350);
    gtk_grid_attach(GTK_GRID(grid), button2, 0, 4, 5, 1);

    result = gtk_label_new(NULL);
    gtk_label_set_markup (GTK_LABEL (result), "<span font=\"10\" color=\"#fff\"bgcolor=\"#FFCCCC\"><b>** ปริมาณรับเฉพาะ จำนวนเต็มและทศนิยมเท่านั้น! ตย. 3/4 ถ้วยตวง = 0.75 ถ้วยตวง**</b></span>");
    gtk_layout_put(GTK_LAYOUT(layout), result, 150, 470);
    gtk_grid_attach(GTK_GRID(grid), result, 0, 5, 6, 1);


    image2 = gtk_image_new_from_file("text4.png");
    gtk_layout_put(GTK_LAYOUT(layout), image2, 350, 490);
    gtk_grid_attach(GTK_GRID(grid), image2, 0, 7, 7, 1);

    image2 = gtk_image_new_from_file("output.png");
    gtk_layout_put(GTK_LAYOUT(layout), image2, 380, 600);
    gtk_grid_attach(GTK_GRID(grid), image2, 0, 8, 8, 1);

    image2 = gtk_image_new_from_file("8.png");
    gtk_layout_put(GTK_LAYOUT(layout), image2, 750, 10);
    gtk_grid_attach(GTK_GRID(grid), image2, 0, 8, 8, 1);


    output = gtk_label_new(NULL);
    gtk_label_set_markup (GTK_LABEL(output), "<span font=\"30\" color=\"#006633\"><b> </b></span>");
    gtk_layout_put(GTK_LAYOUT(layout), output, 440, 640);
    gtk_grid_attach(GTK_GRID(grid), output, 0, 9, 9, 1);





    box = gtk_box_new (TRUE, 1);
    gtk_box_pack_end (GTK_BOX (box), button, TRUE, TRUE, 1);

    gtk_widget_show_all(window);

}

static void activate (GtkApplication *app,gpointer user_data)
{
  GtkWidget *window;
  GtkWidget *box;
  GtkWidget *grid;
  GtkWidget *button;
  GtkWidget *layout;
  GtkWidget *image;


  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "The Changer Bakery");
  gtk_container_set_border_width (GTK_CONTAINER (window), 0);
  gtk_window_set_default_size(GTK_WINDOW(window), 700, 700);
   gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  layout = gtk_layout_new(NULL, NULL);
    gtk_container_add(GTK_CONTAINER (window), layout);
    gtk_widget_show(layout);
    image = gtk_image_new_from_file("bg_star.jpg");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);

    image = gtk_image_new_from_file("logo.png");
  gtk_layout_put(GTK_LAYOUT(layout), image, 150, 10);
  grid = gtk_grid_new ();
  gtk_container_add (GTK_CONTAINER (window), grid);

  button = gtk_button_new();
  image = gtk_image_new_from_file("1.png");
  gtk_button_set_image(GTK_BUTTON(button), image);
    gtk_button_set_relief(GTK_BUTTON(button), GTK_RELIEF_NONE);
  g_signal_connect (button, "clicked", G_CALLBACK (section), (gpointer) window);
  gtk_layout_put(GTK_LAYOUT(layout), button, 250, 250);

  gtk_grid_attach (GTK_GRID (grid), button, 250, 0, 1, 1);


  button = gtk_button_new();
  image = gtk_image_new_from_file("5.png");
    gtk_button_set_image(GTK_BUTTON(button), image);
    gtk_button_set_relief(GTK_BUTTON(button), GTK_RELIEF_NONE);
  g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_widget_destroy), window);
  gtk_layout_put(GTK_LAYOUT(layout), button, 480, 550);
  gtk_grid_attach (GTK_GRID (grid), button, 250, 3, 3, 1);

    image = gtk_image_new_from_file("7.png");
    gtk_layout_put(GTK_LAYOUT(layout), image, 50, 380);
     gtk_grid_attach (GTK_GRID (grid), image, 250, 3, 3, 1);

    box = gtk_box_new (TRUE, 1);
    gtk_box_pack_end (GTK_BOX (box), button, TRUE, TRUE, 1);
    gtk_container_add (GTK_CONTAINER (window), box);

  gtk_widget_show_all (window);

}

int main (int    argc,char **argv)
{
  GtkApplication *app;

  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);


  return status;
}