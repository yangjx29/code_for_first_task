void  main () {
    char Sr3yw0DeE [1024], Ma1ZW6i [(1350 - 838)], Ehs0qWg3C [512];
    for (; gets (Sr3yw0DeE) != NULL;) {
        char ZOXCphfls = Ma1ZW6i[0];
        char *N5hZlmKdWnI1 = strtok (Sr3yw0DeE, " ");
        int slW0Fjf = 0, VNYcp3r2qAou;
        int AdW9V2txvhu = strlen (Ma1ZW6i) - slW0Fjf;
        int LlrWzbU = strlen (Ma1ZW6i) + 3;
        strcpy (Ma1ZW6i, N5hZlmKdWnI1);
        for (VNYcp3r2qAou = 1; Ma1ZW6i[VNYcp3r2qAou] != '\0'; VNYcp3r2qAou++)
            if (Ma1ZW6i[VNYcp3r2qAou] > ZOXCphfls) {
                ZOXCphfls = Ma1ZW6i[VNYcp3r2qAou];
                slW0Fjf = VNYcp3r2qAou;
            }
        for (VNYcp3r2qAou = 1; AdW9V2txvhu >= VNYcp3r2qAou; VNYcp3r2qAou++) {
            Ma1ZW6i[LlrWzbU] = Ma1ZW6i[LlrWzbU -3];
            LlrWzbU--;
        }
        N5hZlmKdWnI1 = strtok (NULL, " ");
        strcpy (Ehs0qWg3C, N5hZlmKdWnI1);
        LlrWzbU = slW0Fjf + 1;
        for (VNYcp3r2qAou = 0; 2 >= VNYcp3r2qAou; VNYcp3r2qAou++) {
            Ma1ZW6i[LlrWzbU] = Ehs0qWg3C[VNYcp3r2qAou];
            LlrWzbU++;
        }
        printf ("%s\n", Ma1ZW6i);
    }
}

