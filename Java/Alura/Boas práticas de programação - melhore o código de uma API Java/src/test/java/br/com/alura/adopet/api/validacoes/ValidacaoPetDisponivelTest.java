package br.com.alura.adopet.api.validacoes;

import br.com.alura.adopet.api.dto.SolicitacaoAdocaoDto;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

class ValidacaoPetDisponivelTest {

    @Test
    void deveriaPermitirSolicitacaoDeAdocaoPet() {

        SolicitacaoAdocaoDto dto = new SolicitacaoAdocaoDto(
                7l,
                2l,
                "Motivo qualquer"
        );

        ValidacaoPetDisponivel validacao = new ValidacaoPetDisponivel();

        Assertions.assertDoesNotThrow(() -> validacao.validar(dto));
    }
}