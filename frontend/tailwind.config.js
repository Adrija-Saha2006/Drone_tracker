/** @type {import('tailwindcss').Config} */
export default {
  content: [
    "./index.html",
    "./src/**/*.{js,ts,jsx,tsx}",
  ],
  theme: {
    extend: {
      colors: {
        'brand-slate': '#000000',
        'brand-panel': '#0A0A0A',
        'brand-blue': '#FFFFFF',
        'brand-green': '#CCCCCC',
        'brand-amber': '#888888',
        'brand-red': '#333333',
      },
      fontFamily: {
        sans: ['Inter', 'system-ui', 'sans-serif'],
        mono: ['JetBrains Mono', 'Menlo', 'monospace'],
      }
    },
  },
  plugins: [],
}
