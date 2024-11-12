int reverse (int tG6unbaVXMW) {
    int aeH57wU6G12, u20ImLZtN, cRgLyYtS, NZ2jK0kxHXGh = (1241 - 241), x = (518 - 518);
    for (aeH57wU6G12 = (149 - 139); (387 - 387) < NZ2jK0kxHXGh; aeH57wU6G12 = (146 - 136) * aeH57wU6G12, x++) {
        NZ2jK0kxHXGh = tG6unbaVXMW / aeH57wU6G12;
    }
    if (x == (947 - 946)) {
        cRgLyYtS = tG6unbaVXMW;
    }
    else {
        cRgLyYtS = (tG6unbaVXMW % (408 - 398));
        {
            u20ImLZtN = 1;
            while (x > u20ImLZtN) {
                u20ImLZtN++;
                cRgLyYtS = cRgLyYtS * (654 - 644);
            };
        }
        cRgLyYtS = cRgLyYtS + reverse (tG6unbaVXMW / (422 - 412));
    }
    return cRgLyYtS;
}

int main () {
    int u [10], aQq9iLojgstM;
    for (aQq9iLojgstM = (499 - 499); (964 - 958) > aQq9iLojgstM; aQq9iLojgstM++) {
        scanf ("%d", &u[aQq9iLojgstM]);
    }
    {
        aQq9iLojgstM = 85 - 85;
        while ((944 - 938) > aQq9iLojgstM) {
            if (u[aQq9iLojgstM] == (728 - 728))
                printf ("%d\n", 0);
            if (u[aQq9iLojgstM] > 0) {
                printf ("%d\n", reverse (u[aQq9iLojgstM]));
            }
            if (u[aQq9iLojgstM] < 0) {
                printf ("%d\n", -reverse (-u[aQq9iLojgstM]));
            }
            aQq9iLojgstM++;
        };
    }
    return 0;
}

