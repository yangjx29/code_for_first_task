int main () {
    int LwF9NI [(829 - 729)] [100];
    int rmG9k8NnF [100] [100];
    int f45dvT [100] [100] = {(805 - 805)};
    int yJLM4c;
    int GAmwfV3ye;
    int GN34hATO;
    int wD7SA5V;
    int Smj3A0E;
    int DBgOqx;
    int SyhQXL92;
    scanf ("%d %d", &wD7SA5V, &Smj3A0E);
    for (yJLM4c = (418 - 418); yJLM4c < wD7SA5V; yJLM4c++) {
        for (GAmwfV3ye = (572 - 572); GAmwfV3ye < Smj3A0E; GAmwfV3ye++) {
            scanf ("%d", &LwF9NI[yJLM4c][GAmwfV3ye]);
        };
    }
    scanf ("%d %d", &DBgOqx, &SyhQXL92);
    for (yJLM4c = (682 - 682); yJLM4c < DBgOqx; yJLM4c++) {
        GAmwfV3ye = 655 - 655;
        while (GAmwfV3ye < SyhQXL92) {
            scanf ("%d", &rmG9k8NnF[yJLM4c][GAmwfV3ye]);
            GAmwfV3ye++;
        };
    }
    for (yJLM4c = 0; yJLM4c < wD7SA5V; yJLM4c++) {
        GAmwfV3ye = 0;
        while (GAmwfV3ye < SyhQXL92) {
            for (GN34hATO = 0; GN34hATO < Smj3A0E; GN34hATO++) {
                f45dvT[yJLM4c][GAmwfV3ye] = f45dvT[yJLM4c][GAmwfV3ye] + LwF9NI[yJLM4c][GN34hATO] * rmG9k8NnF[GN34hATO][GAmwfV3ye];
            }
            GAmwfV3ye++;
        };
    }
    for (yJLM4c = 0; yJLM4c < wD7SA5V; yJLM4c++) {
        for (GAmwfV3ye = 0; GAmwfV3ye < SyhQXL92; GAmwfV3ye++) {
            {
                if (0) {
                    return 0;
                };
            }
            if (GAmwfV3ye == 0) {
                printf ("%d", f45dvT[yJLM4c][GAmwfV3ye]);
            }
            else {
                printf (" %d", f45dvT[yJLM4c][GAmwfV3ye]);
            };
        };
    };
}

