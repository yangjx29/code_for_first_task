int main () {
    int WsiOqYnI3Td9;
    WsiOqYnI3Td9 = 0;
    int tGbUVa1nLMhE;
    int gaJQFzv4u;
    int vsr9KBMVt;
    int MqtAuBZUy;
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
    int u3bQ9o5A1;
    int calc (int gaJQFzv4u, int MqtAuBZUy, int u3bQ9o5A1);
    scanf ("%d%d", &MqtAuBZUy, &u3bQ9o5A1);
    for (tGbUVa1nLMhE = u3bQ9o5A1;; tGbUVa1nLMhE++) {
        gaJQFzv4u = tGbUVa1nLMhE * MqtAuBZUy +u3bQ9o5A1;
        WsiOqYnI3Td9 = 0;
        if (!(u3bQ9o5A1 != gaJQFzv4u % MqtAuBZUy))
            WsiOqYnI3Td9++;
        for (vsr9KBMVt = 2; MqtAuBZUy >= vsr9KBMVt; vsr9KBMVt++) {
            gaJQFzv4u = calc (gaJQFzv4u, MqtAuBZUy, u3bQ9o5A1);
            if (gaJQFzv4u % MqtAuBZUy == u3bQ9o5A1)
                WsiOqYnI3Td9++;
        }
        if (WsiOqYnI3Td9 == MqtAuBZUy) {
            printf ("%d", gaJQFzv4u);
            break;
        };
    }
    return 0;
}

int calc (int gaJQFzv4u, int MqtAuBZUy, int u3bQ9o5A1) {
    return (gaJQFzv4u * MqtAuBZUy / (MqtAuBZUy -1) + u3bQ9o5A1);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
}

