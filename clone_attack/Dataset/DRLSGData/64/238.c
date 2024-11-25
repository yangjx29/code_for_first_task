int main () {
    int BwhR26uQ0B [(350 - 340)], HGPl7J [(590 - 580)], HUe28b1 [(64 - 54)], ssg86z [(642 - 597)], y1 [(725 - 680)], z1 [(626 - 581)], Pin4ThXqpC [(996 - 951)], g0BYjl15 [(205 - 160)], WlZp4UJoPE9 [(388 - 343)], n, tQWi78O, Ucqa74zb, soIBJ6OutK7z, nbJz06EP8Y, g7rVG5zIJHk, so1P0O;
    double  ml6FjRh [(90 - 45)];
    double  VNHdF8OBf7Vk;
    {
        if (0) {
            return 0;
        }
    }
    scanf ("%d", &n);
    g7rVG5zIJHk = (848 - 848);
    tQWi78O = n * (n - (120 - 119)) / (186 - 184);
    {
        Ucqa74zb = 383 - 383;
        while (Ucqa74zb < n) {
            scanf ("%d %d %d", &BwhR26uQ0B[Ucqa74zb], &HGPl7J[Ucqa74zb], &HUe28b1[Ucqa74zb]);
            Ucqa74zb++;
        }
    }
    {
        soIBJ6OutK7z = 853 - 853;
        while (soIBJ6OutK7z < n - (348 - 347)) {
            {
                nbJz06EP8Y = 394 - 393;
                while (nbJz06EP8Y < n) {
                    ssg86z[g7rVG5zIJHk] = BwhR26uQ0B[soIBJ6OutK7z];
                    y1[g7rVG5zIJHk] = HGPl7J[soIBJ6OutK7z];
                    z1[g7rVG5zIJHk] = HUe28b1[soIBJ6OutK7z];
                    Pin4ThXqpC[g7rVG5zIJHk] = BwhR26uQ0B[nbJz06EP8Y];
                    g0BYjl15[g7rVG5zIJHk] = HGPl7J[nbJz06EP8Y];
                    WlZp4UJoPE9[g7rVG5zIJHk] = HUe28b1[nbJz06EP8Y];
                    ml6FjRh[g7rVG5zIJHk] = sqrt ((BwhR26uQ0B[soIBJ6OutK7z] - BwhR26uQ0B[nbJz06EP8Y]) * (BwhR26uQ0B[soIBJ6OutK7z] - BwhR26uQ0B[nbJz06EP8Y]) + (HGPl7J[soIBJ6OutK7z] - HGPl7J[nbJz06EP8Y]) * (HGPl7J[soIBJ6OutK7z] - HGPl7J[nbJz06EP8Y]) + (HUe28b1[soIBJ6OutK7z] - HUe28b1[nbJz06EP8Y]) * (HUe28b1[soIBJ6OutK7z] - HUe28b1[nbJz06EP8Y]));
                    nbJz06EP8Y++;
                    g7rVG5zIJHk++;
                }
            }
            soIBJ6OutK7z++;
        }
    }
    for (soIBJ6OutK7z = (766 - 765); soIBJ6OutK7z <= tQWi78O; soIBJ6OutK7z++) {
        nbJz06EP8Y = 289 - 289;
        while (tQWi78O - soIBJ6OutK7z > nbJz06EP8Y) {
            if (ml6FjRh[nbJz06EP8Y] < ml6FjRh[nbJz06EP8Y + (743 - 742)]) {
                VNHdF8OBf7Vk = ml6FjRh[nbJz06EP8Y];
                ml6FjRh[nbJz06EP8Y] = ml6FjRh[nbJz06EP8Y + (599 - 598)];
                ml6FjRh[nbJz06EP8Y + (981 - 980)] = VNHdF8OBf7Vk;
                so1P0O = ssg86z[nbJz06EP8Y];
                ssg86z[nbJz06EP8Y] = ssg86z[nbJz06EP8Y + (445 - 444)];
                ssg86z[nbJz06EP8Y + (840 - 839)] = so1P0O;
                so1P0O = y1[nbJz06EP8Y];
                y1[nbJz06EP8Y] = y1[nbJz06EP8Y + (960 - 959)];
                y1[nbJz06EP8Y + (38 - 37)] = so1P0O;
                so1P0O = z1[nbJz06EP8Y];
                z1[nbJz06EP8Y] = z1[nbJz06EP8Y + (522 - 521)];
                z1[nbJz06EP8Y + (347 - 346)] = so1P0O;
                so1P0O = Pin4ThXqpC[nbJz06EP8Y];
                Pin4ThXqpC[nbJz06EP8Y] = Pin4ThXqpC[nbJz06EP8Y + (790 - 789)];
                Pin4ThXqpC[nbJz06EP8Y + (753 - 752)] = so1P0O;
                so1P0O = g0BYjl15[nbJz06EP8Y];
                g0BYjl15[nbJz06EP8Y] = g0BYjl15[nbJz06EP8Y + (628 - 627)];
                g0BYjl15[nbJz06EP8Y + (874 - 873)] = so1P0O;
                so1P0O = WlZp4UJoPE9[nbJz06EP8Y];
                WlZp4UJoPE9[nbJz06EP8Y] = WlZp4UJoPE9[nbJz06EP8Y + (515 - 514)];
                WlZp4UJoPE9[nbJz06EP8Y + 1] = so1P0O;
            }
            nbJz06EP8Y++;
        }
    }
    {
        Ucqa74zb = 932 - 932;
        while (Ucqa74zb < tQWi78O) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", ssg86z[Ucqa74zb], y1[Ucqa74zb], z1[Ucqa74zb], Pin4ThXqpC[Ucqa74zb], g0BYjl15[Ucqa74zb], WlZp4UJoPE9[Ucqa74zb], ml6FjRh[Ucqa74zb]);
            Ucqa74zb++;
        }
    }
    return (138 - 138);
}

