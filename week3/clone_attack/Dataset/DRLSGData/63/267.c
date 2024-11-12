int main () {
    int gZPCVU5 [(758 - 658)] [(148 - 48)], XPBGbz8 [(1053 - 953)] [100], m0ZBfYo6k1bw [100] [100] = {(367 - 367)}, n, fmH3b4, ypV7qka6Zu, FASgXNDwu, aAzK6PM28Q1c, pocxXJfhFgqY;
    scanf ("%d%d\n", &fmH3b4, &ypV7qka6Zu);
    {
        if (0) {
            return 0;
        }
    }
    for (FASgXNDwu = (634 - 634); FASgXNDwu < fmH3b4; FASgXNDwu = FASgXNDwu +1)
        for (aAzK6PM28Q1c = (799 - 799); aAzK6PM28Q1c < ypV7qka6Zu; aAzK6PM28Q1c = aAzK6PM28Q1c + 1)
            scanf ("%d", &gZPCVU5[FASgXNDwu][aAzK6PM28Q1c]);
    scanf ("%d%d\n", &ypV7qka6Zu, &n);
    for (FASgXNDwu = (596 - 596); FASgXNDwu < ypV7qka6Zu; FASgXNDwu = FASgXNDwu +1)
        for (aAzK6PM28Q1c = 0; n > aAzK6PM28Q1c; aAzK6PM28Q1c++)
            scanf ("%d", &XPBGbz8[FASgXNDwu][aAzK6PM28Q1c]);
    for (FASgXNDwu = 0; fmH3b4 > FASgXNDwu; FASgXNDwu = FASgXNDwu +1)
        for (aAzK6PM28Q1c = 0; aAzK6PM28Q1c < n; aAzK6PM28Q1c++) {
            for (pocxXJfhFgqY = 0; ypV7qka6Zu > pocxXJfhFgqY; pocxXJfhFgqY++)
                m0ZBfYo6k1bw[FASgXNDwu][aAzK6PM28Q1c] += (gZPCVU5[FASgXNDwu][pocxXJfhFgqY] * XPBGbz8[pocxXJfhFgqY][aAzK6PM28Q1c]);
            printf (aAzK6PM28Q1c == n - 1 ? "%d\n" : "%d ", m0ZBfYo6k1bw[FASgXNDwu][aAzK6PM28Q1c]);
        }
    return 0;
}

