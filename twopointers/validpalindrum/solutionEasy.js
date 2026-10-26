function isPallindrome(s) {
    const cleaned = s.toLowerCase().replace(/[^a-z0-9]/g, '');

    const revresed = cleaned.split('').reverse().join('');

    return cleaned === revresed;
}

console.log(isPallindrome("A man, a plan, a canal: Panama")); // true
console.log(isPallindrome("race a car")); // false
console.log(isPallindrome(" ")); // true