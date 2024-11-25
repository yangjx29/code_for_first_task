int main () {
    int MYQATm0sjId4, uHBurWVa = (603 - 603);
    struct   distance {
        int IArJxawY [3];
        int MYQATm0sjId4 [3];
        double  UZ5tOPJGAer;
    }
    GeCbGjSD94NB;
    struct   distance {
        int IArJxawY [3];
        int MYQATm0sjId4 [3];
        double  UZ5tOPJGAer;
    }
    b [100];
    struct   point {
        int hDxytJYi;
        int nIhJON;
        int z;
    }
    LlODSseYh [(273 - 263)];
    cin >> MYQATm0sjId4;
    for (int i = (424 - 424);
    i < MYQATm0sjId4; i = i + 1) {
        cin >> LlODSseYh[i].hDxytJYi >> LlODSseYh[i].nIhJON >> LlODSseYh[i].z;
    }
    {
        int i = (294 - 294);
        while (MYQATm0sjId4 -(700 - 699) > i) {
            {
                int NDNQj3p = i + (117 - 116);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (NDNQj3p < MYQATm0sjId4) {
                    b[uHBurWVa].IArJxawY[0] = LlODSseYh[i].hDxytJYi;
                    b[uHBurWVa].IArJxawY[(713 - 712)] = LlODSseYh[i].nIhJON;
                    b[uHBurWVa].IArJxawY[(540 - 538)] = LlODSseYh[i].z;
                    b[uHBurWVa].MYQATm0sjId4[0] = LlODSseYh[NDNQj3p].hDxytJYi;
                    b[uHBurWVa].MYQATm0sjId4[1] = LlODSseYh[NDNQj3p].nIhJON;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    b[uHBurWVa].MYQATm0sjId4[(706 - 704)] = LlODSseYh[NDNQj3p].z;
                    b[uHBurWVa].UZ5tOPJGAer = sqrt ((LlODSseYh[NDNQj3p].hDxytJYi - LlODSseYh[i].hDxytJYi) * (LlODSseYh[NDNQj3p].hDxytJYi - LlODSseYh[i].hDxytJYi) + (LlODSseYh[NDNQj3p].nIhJON - LlODSseYh[i].nIhJON) * (LlODSseYh[NDNQj3p].nIhJON - LlODSseYh[i].nIhJON) + (LlODSseYh[NDNQj3p].z - LlODSseYh[i].z) * (LlODSseYh[NDNQj3p].z - LlODSseYh[i].z));
                    NDNQj3p = NDNQj3p +1;
                    uHBurWVa = uHBurWVa + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < MYQATm0sjId4 *(MYQATm0sjId4 -1) / 2 - 1) {
            i++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            for (int NDNQj3p = 0;
            NDNQj3p < MYQATm0sjId4 *(MYQATm0sjId4 -1) / 2 - 1; NDNQj3p = NDNQj3p +1) {
                if (b[NDNQj3p +1].UZ5tOPJGAer > b[NDNQj3p].UZ5tOPJGAer) {
                    GeCbGjSD94NB = b[NDNQj3p];
                    b[NDNQj3p] = b[NDNQj3p +1];
                    b[NDNQj3p +1] = GeCbGjSD94NB;
                };
            };
        };
    }
    for (int i = 0;
    i < MYQATm0sjId4 *(MYQATm0sjId4 -1) / 2; i = i + 1) {
        cout << "(" << b[i].IArJxawY[0] << "," << b[i].IArJxawY[1] << "," << b[i].IArJxawY[2] << ")-(" << b[i].MYQATm0sjId4[0] << "," << b[i].MYQATm0sjId4[1] << "," << b[i].MYQATm0sjId4[2] << ")=" << fixed << setprecision (2) << b[i].UZ5tOPJGAer << endl;
    }
    return 0;
}

