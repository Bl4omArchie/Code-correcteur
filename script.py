def code_correcteur(message, bit_correcteur):
    return message & bit_correcteur == bit_correcteur


def encode_repetition(data_bits):
    encoded_data = [bit | (bit << 1) | (bit << 2) for bit in data_bits]
    return encoded_data

def decode_repetition(encoded_data):
    decoded_data = [(group >> 2) & 1 for group in encoded_data]
    return decoded_data


if __name__ == "__main__":
    carré_init = [[0b01001], [0b11111], [0b10000], [0b01100], [0b00111]]
    correction = [1, 1, 0, 0, 1, 0, 0, 1, 1, 1]

    message = 0b01001
    bit = 0b0
    print (code_correcteur(message, bit))
    
    
    
    """
    data_bits = [1, 0, 1, 1, 0, 0, 1]  # Séquence de bits de données
    encoded_data = encode_repetition(data_bits)
    print (encoded_data)
    print (decode_repetition(encoded_data))
    """