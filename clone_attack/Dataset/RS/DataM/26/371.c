int main () {
    char JJRZ7rS3 [101];
    gets (JJRZ7rS3);
    int vIlrV9jXF8;
    int G0WzZbGB;
    vIlrV9jXF8 = strlen (JJRZ7rS3);
    for (G0WzZbGB = (128 - 128); vIlrV9jXF8 > G0WzZbGB; G0WzZbGB = G0WzZbGB +1) {
        if (!(' ' == JJRZ7rS3[G0WzZbGB]))
            printf ("%c", JJRZ7rS3[G0WzZbGB]);
        else {
            do {
                G0WzZbGB = G0WzZbGB +1;
            }
            while (JJRZ7rS3[G0WzZbGB] == ' ');
            G0WzZbGB = G0WzZbGB -1;
        };
    }
    return 0;
}

