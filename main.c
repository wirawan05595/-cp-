#include <gtk/gtk.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

static GtkWidget *result;
static GtkWidget *number1;
static GtkWidget *number2;
// static GtkWidget *number1;
// static GtkWidget *number2;
// static GtkWidget *section_1;
// static GtkWidget *section_2;
static void section(GtkApplication *app,GtkWidget *widget, gpointer data) {
	GtkWidget *window,*grid;

	// char buffer[32];
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title (GTK_WINDOW (window), "Second Window");
    grid = gtk_grid_new ();
    result = gtk_label_new("ปริมาณที่มี:");
    gtk_grid_attach(GTK_GRID(grid), result, 0, 0, 1, 1);
  	gtk_container_add (GTK_CONTAINER (window), grid);
    number1 = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), number1, 250, 0, 1, 1);
    result = gtk_label_new("ปริมาณที่ต้องการ:  ");
    gtk_grid_attach(GTK_GRID(grid), result, 0, 2, 2, 1);
    number2 = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), number2, 250, 2, 2, 1);
    gtk_container_set_border_width (GTK_CONTAINER (window), 250);
    gtk_widget_set_size_request (window, 500, 500);
    // int num1;
    // scanf("%d", &num1);

    gtk_widget_show_all (window);

}
static void ice_jung(GtkWidget *widget, gpointer data) {
    char buffer[32];
    snprintf(buffer, sizeof(buffer), "iceice2");

    gtk_label_set_text(GTK_LABEL(result), buffer);
}

static void
activate (GtkApplication *app,gpointer user_data)
{
  GtkWidget *window;
  GtkWidget *box;
  GtkWidget *grid;
  GtkWidget *button;
  GtkWidget *icebutton;
  GtkCssProvider *provider;
  GdkDisplay *display;
  GdkScreen *screen;
    provider = gtk_css_provider_new ();
    display = gdk_display_get_default ();
    screen = gdk_display_get_default_screen (display);
    gtk_style_context_add_provider_for_screen (screen, GTK_STYLE_PROVIDER(provider), GTK_STYLE_PROVIDER_PRIORITY_USER);
    gtk_css_provider_load_from_data (GTK_CSS_PROVIDER (provider), " GtkWindow {\n" "   background-image: url('image/bg_star.jpg');\n" "}\n", -1, NULL);
    g_object_unref (provider);
  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Window");
  gtk_container_set_border_width (GTK_CONTAINER (window), 250);
  gtk_window_set_default_size(GTK_WINDOW(window), 500, 500);


  grid = gtk_grid_new ();
  gtk_container_add (GTK_CONTAINER (window), grid);

  button = gtk_button_new_with_label ("มาตราการชั่งตวงทั่วไป");
  gtk_button_set_relief(GTK_BUTTON(button), GTK_RELIEF_NONE);
  g_signal_connect (button, "clicked", G_CALLBACK (section), (gpointer) window);

  gtk_grid_attach (GTK_GRID (grid), button, 250, 0, 1, 1);


  icebutton = gtk_button_new_with_label ("Button 2");
  gtk_button_set_relief(GTK_BUTTON(icebutton), GTK_RELIEF_NONE);
  g_signal_connect (icebutton, "clicked", G_CALLBACK (ice_jung), NULL);
  gtk_grid_attach (GTK_GRID (grid), icebutton, 250, 2, 2, 1);


  button = gtk_button_new_with_label ("Quit");
  gtk_button_set_relief(GTK_BUTTON(button), GTK_RELIEF_NONE);
  g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_widget_destroy), window);
  gtk_grid_attach (GTK_GRID (grid), button, 250, 4, 3, 1);


  result = gtk_label_new(" ");
    gtk_grid_attach(GTK_GRID(grid), result, 3, 4, 3, 1);

    box = gtk_box_new (TRUE, 1);
    gtk_box_pack_end (GTK_BOX (box), button, TRUE, TRUE, 1);
    gtk_container_add (GTK_CONTAINER (window), box);

  gtk_widget_show_all (window);

}

int main (int    argc,
      char **argv)
{
  GtkApplication *app;

  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);


  return status;
}