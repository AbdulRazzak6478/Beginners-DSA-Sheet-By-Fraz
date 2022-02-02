class Solution
{
public:
    int numRookCaptures(vector<vector<char>> &board)
    {
        int n = board.size();
        int capture = 0;
        int ri, ci;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 'R')
                {
                    ri = i;
                    ci = j;
                    break;
                }
            }
        }
        int upr = ri;
        while (upr > 0 && upr < n)
        {
            upr--;
            if (upr >= 0 && board[upr][ci] == 'p')
            {
                capture++;
                break;
            }
            else if (upr >= 0 && board[upr][ci] == 'B')
            {
                break;
            }
        }
        int downr = ri + 1;
        while (downr < n)
        {

            if (downr < n && board[downr][ci] == 'p')
            {
                capture++;
                break;
            }
            else if (downr < n && board[downr][ci] == 'B')
            {
                break;
            }
            downr++;
        }
        int lr = ci;
        int rr = ci;
        while (lr > 0 && lr < n)
        {
            lr--;
            if (lr >= 0 && board[ri][lr] == 'p')
            {
                capture++;
                break;
            }
            else if (lr >= 0 && board[ri][lr] == 'B')
            {
                break;
            }
        }
        while (rr < n)
        {
            rr++;
            if (rr < n && board[ri][rr] == 'p')
            {
                capture++;
                break;
            }
            else if (rr < n && board[ri][rr] == 'B')
            {
                break;
            }
        }
        return capture;
    }
};