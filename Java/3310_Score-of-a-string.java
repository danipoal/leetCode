class Solution {
    public int scoreOfString(String s) {
        //Primero se pasa de string a caracter
        char caracter = 'a';
        char caracter2 = 'a';
        int total = 0;
        for(int i = 0; i < s.length() -1; i++){
            
            caracter = s.charAt(i);
            caracter2 = s.charAt(i+1);    

            //Pasar de char a int
            int x = (int) caracter;
            int y = (int) caracter2;

            //Logica de calculo
            total += Math.abs(x - y);
        }
        return total;
    }
}