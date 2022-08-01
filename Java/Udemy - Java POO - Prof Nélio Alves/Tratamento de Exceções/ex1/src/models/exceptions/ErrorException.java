package models.exceptions;

public class ErrorException extends RuntimeException{
    public static final long serialVersionUID = 1L;
    public ErrorException(String msg) {
        super(msg);
    }
}
