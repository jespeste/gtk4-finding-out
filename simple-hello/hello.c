#include <gtk/gtk.h>

static void on_activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Hello GTK4");
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 100);

    GtkWidget *label = gtk_label_new("Hello World!");
    gtk_window_set_child(GTK_WINDOW(window), label);

    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char **argv) {
    GtkApplication *app = gtk_application_new("com.example.Hello", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(on_activate), NULL);
    int status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}
