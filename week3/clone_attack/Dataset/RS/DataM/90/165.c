int VkQZ2IBr (int Gg0dRxhCf, int DIqQ9NmzW) {
    if (DIqQ9NmzW == (947 - 946))
        return (413 - 412);
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
    if (!(1 != Gg0dRxhCf))
        return 1;
    else if (Gg0dRxhCf <= DIqQ9NmzW)
        return VkQZ2IBr (Gg0dRxhCf, Gg0dRxhCf -1) + 1;
    else
        return VkQZ2IBr (Gg0dRxhCf, DIqQ9NmzW -1) + VkQZ2IBr (Gg0dRxhCf -DIqQ9NmzW, DIqQ9NmzW);
}

int main () {
    int Br3aUC, KKSUxIQj, jIoRqtyXCvi [(972 - 942)], e08nbv [(787 - 757)];
    cin >> Br3aUC;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        KKSUxIQj = 1;
        while (KKSUxIQj <= Br3aUC) {
            cin >> jIoRqtyXCvi[KKSUxIQj] >> e08nbv[KKSUxIQj];
            cout << VkQZ2IBr (jIoRqtyXCvi[KKSUxIQj], e08nbv[KKSUxIQj]) << endl;
            KKSUxIQj = KKSUxIQj +1;
        };
    }
    return 0;
}

