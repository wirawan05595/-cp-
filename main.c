#include <gtk/gtk.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

static GtkWidget *result;
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
if (check == 0){
      double num1 = atof((char *)gtk_entry_get_text(GTK_ENTRY(number1)));
      gchar *select_scale1 = gtk_combo_box_text_get_active_text(GTK_COMBO_BOX_TEXT(combo_box1));
      gchar *select_scale2 = gtk_combo_box_text_get_active_text(GTK_COMBO_BOX_TEXT(combo_box2));

      // *********************************** แปลงช้อนชาเป็น... ****************
    if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        if (fmod(num1,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s", num1 ,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else{
            snprintf(buffer, sizeof(buffer), "%.02lf %s", num1 ,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1/(0.33333333333);
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else{
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

     else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/5;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else{
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1/0.02083333333;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        double box = num1/0.01041666666;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        double box = num1/0.01041666666;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1/0.00520833333;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*768.00;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[0]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1*6;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

// *********************************** แปลงช้อนโต๊ะเป็น... ****************

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1/3;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        if (fmod(num1,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s", num1 ,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else{
            snprintf(buffer, sizeof(buffer), "%.02lf %s", num1 ,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/16;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1/0.0625;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        double box = num1/0.03125;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        double box = num1/0.03125;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1/0.015625;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*256;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[1]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1*2;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

// *********************************** แปลงกรัมเป็น... ****************

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1*5;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1*15;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        if (fmod(num1,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf กรัม", num1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else{
            snprintf(buffer, sizeof(buffer), "%.02lf กรัม", num1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1*240;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        double box = num1*453.59;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

       else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        double box = num1*480;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1*960;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*3840;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

    else if (strcmp(select_scale1, scale1[2]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1*28.3495;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf กรัม",box);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

// *********************************** แปลงถ้วยตวงเป็น... ****************
    else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1*0.02083333333;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1*0.0625;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/240;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

      else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        if (fmod(num1,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        double box = num1/0.5;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        double box = num1*2;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1*4;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*16;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[3]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1/8;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

// *********************************** แปลงปอนด์เป็น... ****************
        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[0]) == 0)
    {
        double box = num1/228;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[1]) == 0)
    {
        double box = num1/96;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[2]) == 0)
    {
        double box = num1/453.59;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[3]) == 0)
    {
        double box = num1/2;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[4]) == 0)
    {
        if (fmod(num1,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

      else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[5]) == 0)
    {
        if (fmod(num1,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",num1,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

        else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[6]) == 0)
    {
        double box = num1*2;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

      else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[7]) == 0)
    {
        double box = num1*8;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }

      else if (strcmp(select_scale1, scale1[4]) == 0 && strcmp(select_scale2, scale2[8]) == 0)
    {
        double box = num1/16;
        if (fmod(box,1) == 0)
        {
            snprintf(buffer, sizeof(buffer), "%.0lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
        else {
            snprintf(buffer, sizeof(buffer), "%.02lf %s",box,select_scale1);
            gtk_label_set_text(GTK_LABEL(output), buffer);
        }
    }
}
}
static void libraryscale(GtkApplication *app,GtkWidget *widget, gpointer data) {
	GtkWidget *window;
	GtkWidget *grid;
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window), "Second Window");
    gtk_container_set_border_width (GTK_CONTAINER (window), 50);
    gtk_widget_set_size_request (window, 500, 500);
    grid = gtk_grid_new ();
    gtk_container_add (GTK_CONTAINER (window), grid);
    gtk_window_set_position (GTK_WINDOW (window), GTK_WIN_POS_CENTER);

    result = gtk_label_new("1: กรัม");
    gtk_grid_attach(GTK_GRID(grid), result, 0, -1, 1, 1);
    result = gtk_label_new("2: ช้อนชา");
    gtk_grid_attach(GTK_GRID(grid), result, 0, 0, 1, 1);
    result = gtk_label_new("3: ช้อนโต๊ะ");
    gtk_grid_attach(GTK_GRID(grid), result, 0, 1, 1, 1);





    gtk_widget_show_all (window);

}





static void section(GtkApplication *app,GtkWidget *widget, gpointer data) {
	GtkWidget *window,*grid,*box;
	GtkWidget *button;
	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window), "Second Window");
    grid = gtk_grid_new ();
    gtk_container_add (GTK_CONTAINER (window), grid);


	button = gtk_button_new_with_label ("มาตราส่วน");
  	g_signal_connect (button, "clicked", G_CALLBACK (libraryscale), (gpointer) window);
  	gtk_grid_attach(GTK_GRID(grid), button, 0, 0, 1, 1);
  	gtk_container_set_border_width (GTK_CONTAINER (window), 250);



    result = gtk_label_new("มาตรส่วนที่มี:");
    gtk_grid_attach(GTK_GRID(grid), result, 2, 1, 1, 1);



  combo_box1 = gtk_combo_box_text_new();
     gtk_layout_put(GTK_LAYOUT(layout), combo_box1, 450, 250);
    gtk_grid_attach(GTK_GRID(grid), combo_box1, 3, 1, 1, 1);


    result = gtk_label_new("  ");
    gtk_grid_attach(GTK_GRID(grid), result, 3, 2, 1, 1);

    result = gtk_label_new("ปริมาณที่ต้องการ:  ");
    gtk_grid_attach(GTK_GRID(grid), result, 0, 3, 1, 1);
	number1 = gtk_entry_new();
	gtk_grid_attach(GTK_GRID(grid), number1, 2, 3, 1, 1);


    result = gtk_label_new("  มาตรส่วนที่ต้องการ:  ");
    gtk_grid_attach(GTK_GRID(grid), result, 3, 3, 1, 1);


        combo_box2 = gtk_combo_box_text_new();
    gtk_layout_put(GTK_LAYOUT(layout), combo_box2, 790, 350);
    gtk_grid_attach(GTK_GRID(grid), combo_box2, 4, 3, 1, 1);

    for (int i = 0; i < G_N_ELEMENTS(scale2); i++){
        gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT(combo_box2), scale2[i]);
    }
    gtk_combo_box_set_active(GTK_COMBO_BOX(combo_box2), 0);


    result = gtk_label_new("  ");
    gtk_grid_attach(GTK_GRID(grid), result, 0, 4, 5, 1);

    gtk_widget_set_size_request (window, 500, 500);
    box = gtk_box_new (TRUE, 1);
    gtk_box_pack_end (GTK_BOX (box), button, TRUE, TRUE, 1);

    gtk_widget_show_all (window);

}
static void ice_jung(GtkWidget *widget, gpointer data) {
    char buffer[32];
    snprintf(buffer, sizeof(buffer), "iceice2");

    gtk_label_set_text(GTK_LABEL(result), buffer);
}

static void activate (GtkApplication *app,gpointer user_data)
{
  GtkWidget *window;
  GtkWidget *box;
  GtkWidget *grid;
  GtkWidget *button;
  GtkWidget *icebutton;
  GtkWidget *layout;
  GtkWidget *image,*label;


  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "cp61");
  gtk_container_set_border_width (GTK_CONTAINER (window), 0);
  gtk_window_set_default_size(GTK_WINDOW(window), 500, 500);
   gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  layout = gtk_layout_new(NULL, NULL);
    gtk_container_add(GTK_CONTAINER (window), layout);
    gtk_widget_show(layout);
	label = gtk_label_new(NULL);
    image = gtk_image_new_from_file("bg_star.jpg");
    gtk_layout_put(GTK_LAYOUT(layout), image, 0, 0);

  gtk_label_set_markup (GTK_LABEL (label), "<span face=\"Courier New\" font=\"30\" color=\"#FF6699\"  bgcolor=\"#FFE4A4\"><b>The changer</b></span>");
  gtk_layout_put(GTK_LAYOUT(layout), label, 110, 10);
  grid = gtk_grid_new ();
  gtk_container_add (GTK_CONTAINER (window), grid);

  button = gtk_button_new();
  image = gtk_image_new_from_file("1.png");
  gtk_button_set_image(GTK_BUTTON(button), image);
	gtk_button_set_relief(GTK_BUTTON(button), GTK_RELIEF_NONE);
	gtk_button_set_relief(GTK_BUTTON(button), GTK_RELIEF_NONE);
  g_signal_connect (button, "clicked", G_CALLBACK (section), (gpointer) window);
  gtk_layout_put(GTK_LAYOUT(layout), button, 150, 100);

  gtk_grid_attach (GTK_GRID (grid), button, 250, 0, 1, 1);


  icebutton = gtk_button_new_with_label (" Button 2");
  g_signal_connect (icebutton, "clicked", G_CALLBACK (ice_jung), NULL);
  gtk_layout_put(GTK_LAYOUT(layout), icebutton, 200, 250);
  gtk_grid_attach (GTK_GRID (grid), icebutton, 250, 2, 2, 1);


  button = gtk_button_new();
  image = gtk_image_new_from_file("5.png");
	gtk_button_set_image(GTK_BUTTON(button), image);
	gtk_button_set_relief(GTK_BUTTON(button), GTK_RELIEF_NONE);
	gtk_button_set_relief(GTK_BUTTON(button), GTK_RELIEF_NONE);
  g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_widget_destroy), window);
  gtk_layout_put(GTK_LAYOUT(layout), button, 350, 400);
  gtk_grid_attach (GTK_GRID (grid), button, 250, 3, 3, 1);


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