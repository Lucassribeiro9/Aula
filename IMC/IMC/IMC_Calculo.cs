using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace IMC
{
    class IMC_Calculo
    {
        // variáveis de instância
        // conceito de encapsulamento
        private double peso;
        private double altura;
        private char sexo;
        private double imc;
        private String classificacao;

        //construtor
        public IMC_Calculo()
        {
            this.peso = 0;
            this.altura = 0;
            this.sexo = ' ';
            this.imc = 0;
            this.classificacao = " ";
        }

        // para encapsulamento - métodos acessores/modificadores - Get's/Set's
        public double getPeso()
        {
            return peso;
        }

        public void setPeso(double peso)
        {
            this.peso = peso;
        }

        public double getAltura()
        {
            return altura;
        }

        public void setAltura(double altura)
        {
            this.altura = altura;
        }

        public char getSexo()
        {
            return sexo;
        }

        public void setSexo(char sexo)
        {
            this.sexo = sexo;
        }

        public double getIMC()
        {
            return imc;
        }

        public String getClassificacao()
        {
            return classificacao;
        }

        private void calcularIMC()
        {
            this.imc = (this.peso / Math.Pow(this.altura, 2));
        }

        // métodos de calculo e classificação
        // utilização de private encapsulamento de métodos

        private void fazerClassificacao()
        {
            if (this.sexo == 'M')
            {
                // calculo IMC homem
                if (this.imc < 20.7)
                {
                    this.classificacao = "Abaixo do peso";
                }
                else if ((this.imc >= 20.7) && (this.imc < 26.4))
                {
                    this.classificacao = "Peso normal";
                }
                else if ((this.imc >= 26.4) && (this.imc < 27.8))
                {
                    this.classificacao = "Marginalmente acima do peso";
                }
                else if ((this.imc >= 27.8) && (this.imc < 31.1))
                {
                    this.classificacao = "Acima do peso";
                }
                else
                {
                    this.classificacao = "Obeso";
                }
              
            }
            else
            {
                // IMC mulheres
                if (this.imc < 19.5)
                {
                    this.classificacao = "Abaixo do peso";
                }
                else if ((this.imc >= 19.5) && (this.imc < 25.8))
                {
                    this.classificacao = "Peso normal";
                }
                else if ((this.imc >= 25.8) && (this.imc < 27.3))
                {
                    this.classificacao = "Marginalmente acima do peso";
                }
                else if ((this.imc >= 27.3) && (this.imc < 32.3))
                {
                    this.classificacao = "Acima do peso";
                }
                else
                {
                    this.classificacao = "Obeso";
                }
            }
            
        }
        public void calcularEClassificaroIMC()
        {
            calcularIMC();
            fazerClassificacao();
        }
    }
}
