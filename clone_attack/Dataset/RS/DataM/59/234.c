int main () {
    char TYOASsP [M] [M];
    char room1 [M] [M];
    int z8Y4OoXs3qFg;
    int ABMqNvY;
    int O8xltp;
    int Q6oqcmuwsYzD;
    int sum = (149 - 149);
    scanf ("%d", &z8Y4OoXs3qFg);
    {
        O8xltp = 896 - 895;
        while (z8Y4OoXs3qFg >= O8xltp) {
            scanf ("%s", TYOASsP[O8xltp]);
            O8xltp = O8xltp +1;
        };
    }
    scanf ("%d", &ABMqNvY);
    ABMqNvY = ABMqNvY -1;
    {
        O8xltp = 606 - 605;
        while (O8xltp <= z8Y4OoXs3qFg) {
            strcpy (room1[O8xltp], TYOASsP[O8xltp]);
            O8xltp = O8xltp +1;
        };
    }
    while (ABMqNvY) {
        ABMqNvY--;
        {
            O8xltp = 263 - 262;
            while (O8xltp <= z8Y4OoXs3qFg) {
                Q6oqcmuwsYzD = (260 - 260);
                if ((TYOASsP[O8xltp][(74 - 73)] == '@' || TYOASsP[O8xltp -(458 - 457)][(688 - 688)] == '@' || TYOASsP[O8xltp +(24 - 23)][(293 - 293)] == '@') && TYOASsP[O8xltp][(98 - 98)] == '.') {
                    room1[O8xltp][(544 - 544)] = '@';
                }
                {
                    Q6oqcmuwsYzD = 556 - 555;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    }
                    while (z8Y4OoXs3qFg > Q6oqcmuwsYzD) {
                        if ((TYOASsP[O8xltp][Q6oqcmuwsYzD +(143 - 142)] == '@' || TYOASsP[O8xltp -(343 - 342)][Q6oqcmuwsYzD] == '@' || TYOASsP[O8xltp +(373 - 372)][Q6oqcmuwsYzD] == '@' || TYOASsP[O8xltp][Q6oqcmuwsYzD -1] == '@') && TYOASsP[O8xltp][Q6oqcmuwsYzD] == '.') {
                            room1[O8xltp][Q6oqcmuwsYzD] = '@';
                        }
                        Q6oqcmuwsYzD = Q6oqcmuwsYzD +1;
                    };
                }
                O8xltp = O8xltp +1;
            };
        }
        {
            O8xltp = 1;
            while (O8xltp <= z8Y4OoXs3qFg) {
                strcpy (TYOASsP[O8xltp], room1[O8xltp]);
                O8xltp++;
            };
        };
    }
    {
        O8xltp = 1;
        while (O8xltp <= z8Y4OoXs3qFg) {
            {
                Q6oqcmuwsYzD = 0;
                while (Q6oqcmuwsYzD < z8Y4OoXs3qFg) {
                    if (TYOASsP[O8xltp][Q6oqcmuwsYzD] == '@') {
                        sum++;
                    }
                    Q6oqcmuwsYzD = Q6oqcmuwsYzD +1;
                };
            }
            O8xltp++;
        };
    }
    printf ("%d", sum);
    return 0;
}

