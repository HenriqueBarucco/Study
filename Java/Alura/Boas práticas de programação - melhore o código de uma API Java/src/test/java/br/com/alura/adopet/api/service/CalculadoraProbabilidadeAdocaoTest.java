package br.com.alura.adopet.api.service;

import br.com.alura.adopet.api.dto.CadastroAbrigoDto;
import br.com.alura.adopet.api.dto.CadastroPetDto;
import br.com.alura.adopet.api.model.Abrigo;
import br.com.alura.adopet.api.model.Pet;
import br.com.alura.adopet.api.model.ProbabilidadeAdocao;
import br.com.alura.adopet.api.model.TipoPet;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

class CalculadoraProbabilidadeAdocaoTest {

    @Test
    void deveriaRetornarProbabilidadeAltaParaPetComPesoBaixoEIdadeBaixa() {
        // idade 4 anos e 4kg

        Abrigo abrigo = new Abrigo(new CadastroAbrigoDto(
                "Abrigo 1",
                "5516990000000",
                "henrique@email.com"
        ));

        Pet pet = new Pet(new CadastroPetDto(
                TipoPet.GATO,
                "Gato 1",
                "Siames",
                4,
                "Branco",
                4.0f
        ), abrigo);

        CalculadoraProbabilidadeAdocao calculadora = new CalculadoraProbabilidadeAdocao();
        ProbabilidadeAdocao probabilidadeAdocao = calculadora.calcular(pet);

        Assertions.assertEquals(ProbabilidadeAdocao.ALTA, probabilidadeAdocao);
    }

    @Test
    void deveriaRetornarProbabilidadeMediaParaPetComPesoBaixoEIdadeAlta() {
        // idade 15 anos e 4kg

        Abrigo abrigo = new Abrigo(new CadastroAbrigoDto(
                "Abrigo 1",
                "5516990000000",
                "henrique@email.com"
        ));

        Pet pet = new Pet(new CadastroPetDto(
                TipoPet.GATO,
                "Gato 1",
                "Siames",
                15,
                "Branco",
                4.0f
        ), abrigo);

        CalculadoraProbabilidadeAdocao calculadora = new CalculadoraProbabilidadeAdocao();
        ProbabilidadeAdocao probabilidadeAdocao = calculadora.calcular(pet);

        Assertions.assertEquals(ProbabilidadeAdocao.MEDIA, probabilidadeAdocao);
    }
}