#include <gtk/gtk.h>

// Callback function to handle the application exit
void on_window_destroy(GtkWidget *widget, gpointer data) {
    gtk_main_quit();
}

int main(int argc, char *argv[]) {
    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Hello, World!");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_widget_set_size_request(window, 200, 100);

    // Connect the window's destroy signal to on_window_destroy function
    g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(on_window_destroy), NULL);

    // Create a label with the text "Hello, World!"
    GtkWidget *label = gtk_label_new("Hello, World!");

    // Add the label to the window
    gtk_container_add(GTK_CONTAINER(window), label);

    // Show all widgets
    gtk_widget_show_all(window);

    // Run the GTK main loop
    gtk_main();

    return 0;
}

